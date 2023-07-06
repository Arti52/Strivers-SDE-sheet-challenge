// 1. Approach O(N) time complexity beats 42 % and 91% in memory.
int findCelebrity(int n) {
 	int c=0;
        for (int j = 1; j < n; j++) {
          if (knows(c, j))
             c = j;
        }
		for (int j = 0; j < n; j++)
		{
			if(c!=j&&(knows(c,j)==1||knows(j,c)==0))return -1;
		}
		return c;

}
