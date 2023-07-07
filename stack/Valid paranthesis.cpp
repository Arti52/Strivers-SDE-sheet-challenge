// 1.Approach Using stack O(N) time complexity and Space Complexity.
bool isValidParenthesis(string expression)
{
    // Write your code here.
    if(expression.empty()||expression.size()==1) return false;
    stack<char> s;
    for(int i=0;i<expression.size();i++)
     {   
        char curr=expression[i];
       if(curr =='('||curr=='{'||curr=='[')
            { 
             s.push(curr); 
            }
            else 
            { 
            if (s.empty() || (curr== ')' && s.top() !='(') || (curr== '}' && s.top() != '{') ||(curr== ']' && s.top() != '[')) 
                  return false; 
            s.pop(); 
         }
     }
    return s.empty();
}
//2. Approach using unordered_map give with same Complexities.
bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        for(char c: s) {
            if(mp.find(c) != mp.end()) {
                st.push(c);
            } else if(!st.empty() && mp[st.top()] == c) {
                    st.pop();
            } else {
                return false;
            }
        }
        
        return st.empty();
    }
