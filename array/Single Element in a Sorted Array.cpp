//Optimal Striver approach just using Binary seach nd discard left portion if any one is true (mid%2==1&&arr[mid]==arr[mid-1])||(mid%2==0&&arr[mid]==arr[mid+1])otherwise discard right Portion.
int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int low=0,high=arr.size()-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid-1]!=arr[mid]&&arr[mid+1]!=arr[mid])
		   return arr[mid];
		else if((mid%2==1&&arr[mid]==arr[mid-1])||(mid%2==0&&arr[mid]==arr[mid+1]))
		   low=mid+1;
		else 
		   high=mid-1;
		  
	}
	return -1;
}
