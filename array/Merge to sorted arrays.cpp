// my approach ,38 % Beats in Time Complexity nd 98 % in space Complexity
int j=0;
	for(int i=0;i<m+n;i++)
    {
          if (arr1[i] == 0) {
             arr1[i]=arr2[j];
			j++;
          }
    }
	sort(arr1.begin(),arr1.end());
	return arr1;
// Striver Appproach
