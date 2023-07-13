//Striver approach O(N) time comlexity beats 33% and O(N) sapace Complexity beats 96%.
#include<bits/stdc++.h>
using namespace std;
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   stack<int> st;
   int n=heights.size();
   int maxArea=0;
   for(int i=0;i<=n;i++)
   {
     while(!st.empty()&&(i==n||heights[st.top()]>=heights[i]))
     {
       int h=heights[st.top()];
       st.pop();
       int w;
       if(st.empty())
         w=i;
       else
         w=i-st.top()-1;
      maxArea=max(maxArea,h*w);
    }
     st.push(i);  
   }
   return maxArea;
 }
