#include <stdio.h>

int main(void) {
	// your code goes here
int a[1000], n, i, j, swap,T,k;
 
  scanf("%d", &T);
 for(k=0;k<T;k++)
 {
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
 for (i= 0 ; i< n-1; i++)
  { j=i;
 
    while ( j > 0 && a[j-1] > a[j]) 
    {
      swap  = a[j];
      a[j]   = a[j-1];
      a[j-1] = swap;
 
      j--;
    }
  }
  
  for (i = 0; i < n; i++)
     printf("%d ", a[i]);
}
	return 0;
}


