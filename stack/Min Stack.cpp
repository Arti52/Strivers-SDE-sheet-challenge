//Time Complexity->O(1) beats 33% and Space Complexity->O(1) beats 89%.
#include <bits/stdc++.h>
// Implement class for minStack.
class minStack {
  stack<pair<int, int>> s;
public:
  // Constructor
  minStack() {}
  // Function to add another element equal to num at the top of stack.
  void push(int num) {
    if (s.empty())
      s.push({num, num});
    else if (s.top().second < num)
      s.push({num, s.top().second});
    else
      s.push({num, num});
  }

  // Function to remove the top element of the stack.
  int pop() {
    if (s.empty())
      return -1;
    auto t = s.top();
    s.pop();
    return t.first;
  }
  // Function to return the top element of stack if it is present. Otherwise
  // return -1.
  int top() 
  { 
	  return s.empty() ? -1 : s.top().first; 
  }
  // Function to return minimum element of stack if it is present. Otherwise
  // return -1.
  int getMin() 
  { 
	  return s.empty() ? -1 : s.top().second; 
  }
};
