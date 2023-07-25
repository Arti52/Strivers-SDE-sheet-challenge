//Time Complexity->O(N) Beats 95% nd Space Complexity->O(N)+O(N)~O(N) beats 93%.
#include <bits/stdc++.h>
class Stack {
  // Define the data members.
  queue<int> q1;
  queue<int> q2;

public:
  Stack() {
    // Implement the Constructor.
  }

  /*----------------- Public Functions of Stack -----------------*/

  int getSize() 
  {  
    return q1.size();
  }

  bool isEmpty() 
  { 
    return q1.empty();
  }

  void push(int element) 
    { 
      q1.push(element);
    }

  int pop() {
    if (q1.empty()) {
      return -1;
    }
    int ans=-1;
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    ans=q1.front();
    q1.pop();
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    return ans;
    
  }

  int top() {
    if (q1.empty()) {
      return -1;
    }
    int ans=-1;
    while(!q1.empty()){
        ans=q1.front();
        q2.push(ans);
        q1.pop();
    }
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    return ans;
  }
};
