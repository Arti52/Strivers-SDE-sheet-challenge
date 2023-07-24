//My Approach time Complexity->O(N)+O(NlogN) beats 13% Space Complexity->O(1) beats 47%.
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int platform=1,ans=1;
    int i=1,j=0;
    while(i<n&&j<n)
    {
        if(at[i]<=dt[j])
        {
            platform++;
            i++;
        }
        else
          {
              platform--;
              j++;
          }
        ans=max(platform,ans);
    }
    return ans;

}
