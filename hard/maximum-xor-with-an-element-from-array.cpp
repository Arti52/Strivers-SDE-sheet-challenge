vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	vector<int>ans;
	for(int i = 0;i<queries.size();i++){
		int maxi = -1;
		int elem = queries[i][0];
		int comp = queries[i][1];
		for(int j = 0;j<arr.size();j++){
			int val= -1;
			if(arr[j]<=comp){
				val = elem^arr[j];
			}
			maxi = max(maxi,val);
		}
		ans.push_back(maxi);
	}
	return ans;
}
