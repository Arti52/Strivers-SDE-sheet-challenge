//Beats 99.6% in Time Complexity and 99.4 % in Space
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buy=INT_MAX,profit=INT_MIN;
    for(int i=0;i<prices.size();i++)
    {
         buy=min(buy,prices[i]);
         profit=max(profit,prices[i]-buy);
    } 
    return profit;
}
