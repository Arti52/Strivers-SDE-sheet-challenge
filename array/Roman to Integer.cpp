//Approach 1.Time Complexity->O(N) beats 66% and Space Complexity->O(1) beats 23%.
int romanToInt(string s) {
    // Write your code here
    unordered_map<char, int> ump;
        ump['I'] = 1;
        ump['V'] = 5;
        ump['X'] = 10;
        ump['L'] = 50;
        ump['C'] = 100;
        ump['D'] = 500;
        ump['M'] = 1000;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(ump[s[i]] < ump[s[i+1]]){
                ans-=ump[s[i]];
            }
            else{
                ans+=ump[s[i]];
            }
        }
        return ans;
}
//Approach 2 
 int sum=0;
     for(int i=0;i<s.size();i++)
         {
             if(s[i]=='I')
             {
                 if(s[i+1]=='V'){
                  sum+=4;
                  i++;}
                 else if(s[i+1]=='X'){
                  sum+=9;
                  i++;}
                else 
                  sum+=1;
             }
            else if(s[i]=='V')
               sum+=5;
            else if(s[i]=='X')
            { 
                if(s[i+1]=='L'){
                  sum+=40;
                  i++;}
                else if(s[i+1]=='C'){
                  sum+=90;
                  i++;}
                else 
                   sum+=10;
            }
            else if(s[i]=='L')
               sum+=50;     
            else if(s[i]=='C')
            {
                  if(s[i+1]=='M'){
                  sum+=900;
                  i++;}
                  else if(s[i+1]=='D'){
                  sum+=400;
                  i++;}
                  else
                    sum+=100;
            }
            else if(s[i]=='D')
            {
                  if(s[i+1]=='M'){
                  sum+=900;
                  i++;}
                  else
                    sum+=500;
            }
            else if(s[i]=='M')
                sum+=1000;
         }
         return sum;
