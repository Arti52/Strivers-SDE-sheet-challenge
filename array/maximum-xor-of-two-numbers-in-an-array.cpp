int maximumXor(vector<int> A)
{
   int ans(0), mask(0);
    unordered_set<int> s;
    for(int i = 31; i>=0; i--)
    {
        mask |= (1<<i);
        int temp = ans|(1<<i);
        for (int j = 0; j < A.size(); j++){
            int num = A[j] & mask;
            if (s.find(temp ^ num) != s.end()) {
                ans = temp;
                break;
            }
            s.insert(num);
        }
        s.clear();
    }
    return ans;
}
