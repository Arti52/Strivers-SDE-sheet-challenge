//Time Complexity ->O(V+E) beats 46% and space Complexity->O(V) beats 89%.
#include<bits/stdc++.h>
unordered_map<graphNode*,graphNode*>mp;
graphNode *dfs(graphNode *cur){
    if(mp.find(cur) != mp.end()){
        return mp[cur];
    }
    graphNode *clone = new graphNode(cur->data);
    mp[cur] = clone;
    for(auto it: cur->neighbours){
        clone->neighbours.push_back(dfs(it));
    }
    return clone;
}

graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
    graphNode *clone = new graphNode(node->data);
    if(node == NULL){
        return NULL;
    }
    if(node->neighbours.size() == 0){
        return clone;
    }
    return dfs(node);
}
