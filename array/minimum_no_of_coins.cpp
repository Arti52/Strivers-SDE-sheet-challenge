// 99.7 % beats in time nd 98.5 in Space.
#include <bits/stdc++.h> 
int count=0;
int findMinimumCoins(int amount ) 
{
    int currency[]={1,2,5,10,20,50,100,500,1000};
    int coins=0;
    int i =8;
    while(amount&& i>=0)
    {
        if(amount< currency[i])
        {
            i--;
          continue;
        }
        coins++;
        amount-= currency[i];
    }
    return coins;

}
