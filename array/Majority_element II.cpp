// simple approach less optimize in time but best in auxilary space//
    
    unordered_map<int,int> ump;
    for(auto x:arr)
    {
        ump[x]++;
    }
    int N=arr.size();
    arr.clear();
    for(auto x:ump)
    {
        if(x.second>N/3)
           arr.push_back(x.first);
    }
       return arr;
