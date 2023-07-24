//Time Complexity->O(N) beats 98% ans Space Complexity O(K) beats 2%.
#include <bits/stdc++.h> 
class Kthlargest {
    private:
    int K;  
    priority_queue<int> pq;
   
public:
    Kthlargest(int k, vector<int> &arr) {
       K=k;
      for(int &val : arr) pq.push(-val);
    }

    void add(int num) {
       pq.push(-num);
        pq.pop();
    }

    int getKthLargest() {
       return -pq.top(); 
    }

};
