//Approach 1. Time Complexity->O(N)+O(NlogN) beats 4% and Space Complexity->O(N)+O(N)+O(N)~O(N) beats 12%.
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
   vector<pair<int,int>> v;
   vector<int> ans;
   unordered_map<int,int> ump;
   for(auto x:arr)
   {
       ump[x]++;
   }
   for(auto x:ump)
   {
       v.push_back({x.second,x.first});
   }
   sort(v.begin(),v.end(),greater<pair<int,int>>());
   for(int i=0;i<k;i++){
     ans.push_back(v[i].second);
   }
   return ans;
}
//Approach 2. Time Complexity->O(NlogN) and Space Complexity->O(N)+O(N)+O(N)~O(N) .
 if (k == nums.size()) {

            return nums;

        }

        unordered_map<int,int> m;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        for(auto x : nums ){

            m[x]++;

        }

        for(auto x : m ){

            pq.push({x.second,x.first});

            if(pq.size()>k){

                pq.pop();

            }

        }

        vector<int> ans;

        while(!pq.empty()){

            ans.push_back(pq.top().second);

            pq.pop();

        }

        sort(ans.begin(),ans.end());

        return ans;

    }

```
