// @ stack using sorting.
#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{  
	 stack<int> temp;
	while(!stack.empty())
	{
	    int t;
		t=stack.top();
	    stack.pop();
        while (!temp.empty() && temp.top()<t)
		{
          stack.push(temp.top());
          temp.pop();
        }
        temp.push(t);
     }
        while(!temp.empty())
	{
		stack.push(temp.top());
		temp.pop();
	}
}
