// @ Pointer approach 100% beats??
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j=0;
	for(int i=1;i<n;i++)
	{
          if (arr[j] != arr[i]) {
			j++;
			swap(arr[j],arr[i]);
          }  
	}
	
	return j+1;
}
