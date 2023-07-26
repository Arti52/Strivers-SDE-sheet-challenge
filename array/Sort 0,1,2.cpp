//**First approach ->brute force ,time consuming as using an unordered map for storing frequency of 0,1,nd 2 then store in array with the help of this frequencies in desired order.//
unordered_map<int,int> ump;
   for (int i = 0; i<n; i++) {
     ump[arr[i]]++;
   }
   int zero = ump[0], one =ump[1], two =ump[2];
   for (int i = 0;i< zero;i++)
      arr[i]=0;
   for (int i = zero; i < zero+one; i++)
     arr[i] = 1;
   for (int i = one+zero; i<one+zero+two; i++)
     arr[i] = 2;
     
//**Second approach->optimal than first,Using 3 pointers start,mid,end for 0,1 and 2 respectively.As all zero come before low nd all 2 come after high nd all 1 come between low nd high.//
  int start=0,mid=0,end=n-1;
        while(mid <= end){
            if(arr[mid] == 0){
                swap(arr[start], arr[mid]);
                start++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[end]);
                end--;
            }
        }
