//striver approach time complexity->O(N)+O(NlogN) beats 95% and space complexity->O(N) beats 6%.
int maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.
   vector<pair<int,int>> v;
    for(int i=0;i<start.size();i++)
    {
     v.push_back({end[i],start[i]});
    }
    sort(v.begin(),v.end());
    int max_meet=1;
    int prev_meet=v[0].first;
    for(int i=1;i<start.size();i++)
    {
       if(v[i].second>prev_meet)
       {
           max_meet++;
           prev_meet=v[i].first;
       }
          
    }
    return max_meet;
}
