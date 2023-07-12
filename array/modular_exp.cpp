//O(log(n)) time complexity beats 86% and O(log(n)) space complexity beats 97%.
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n==1)
      return x%m;
    long half=modularExponentiation(x,n/2,m);
    half=(half*half)%m;
    if(n%2==1)
       half=(half*x)%m;
    return half;
}
