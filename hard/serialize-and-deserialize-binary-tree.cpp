#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
string serializeTree(TreeNode<int> *root)
{
    if(!root) return ""; // if root is null return empty string
    queue<TreeNode<int>*> q;
    q.push(root);

    string s = "";
    while(!q.empty()){
        auto curr = q.front(); q.pop();
        if(!curr) s.append("$,"); // if curr is null append $ to string
        else s.append(to_string(curr->data) + ","); // else append curr->data to string

        if(curr){
            q.push(curr->left);
            q.push(curr->right);
        }
    }

    return s;
}

TreeNode<int>* deserializeTree(string &serialized)
{
    if(serialized.size() == 0) return NULL;
    stringstream s(serialized); // create a string stream from serialized string to read from it 
    string str;
    getline(s, str, ','); // read the first value from string stream and store it in str variable the delimiter is ,
    TreeNode<int> * root = new TreeNode<int>(stoi(str));
    queue<TreeNode<int>*> q;
    q.push(root);


    while(!q.empty()){
        auto curr = q.front(); q.pop();

        getline(s, str, ','); // read next value from string stream
        if(str == "$"){ // if str is $ then curr->left is null
            curr->left = NULL;
        } else {
            auto left = new TreeNode<int>(stoi(str));
            curr->left = left;
            q.push(left);
        }

        getline(s, str, ','); // read next value from string stream
        if(str == "$"){ // if str is $ then curr->right is null
            curr->right = NULL;
        } else {
            auto right = new TreeNode<int>(stoi(str));
            curr->right = right;
            q.push(right);
        }

    }

    return root;
}
