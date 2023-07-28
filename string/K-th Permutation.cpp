//Time Complexity->O(N*N!) beats 100% and Space Complexity->O(N) beats 100%.
#include<bits/stdc++.h>
string kthPermutation(int n, int k) {
 int fact = 1;
    string kthper = "";
    vector<int> nums;

    for(int i = 1; i < n; i++){
        fact *= i;
        nums.push_back(i);
    }

    nums.push_back(n);
    k-= 1;

    while(true){
        kthper += to_string(nums[k/fact]);
        nums.erase(nums.begin() + k/fact);
        if (nums.size() == 0) {
          break;
        }
        k %= fact;
        fact /= nums.size();
    }

    return kthper;
}



//Striver Approach Time complexity: O(N! * N) +O(N! Log N!) Space complexity: O(N) 
#include<bits/stdc++.h>
void permutation(string & s, int ind, vector < string > & res) {
      if (ind == s.size()) {
        res.push_back(s);
        return;
      }
      for (int i = ind; i < s.size(); i++) {
        swap(s[i], s[ind]);
        permutation(s, ind + 1, res);
        swap(s[i], s[ind]);
      }
    }
string kthPermutation(int n, int k) {
    string s;
    vector < string > res;
    for (int i = 1; i <= n; i++) {
      s.push_back(i + '0');
    }
    permutation(s, 0, res);
    //sort the generated permutations
    sort(res.begin(), res.end());
    //make k 0-based indexed to point to kth sequence
    auto it = res.begin() + (k - 1);
    return *it;
}
