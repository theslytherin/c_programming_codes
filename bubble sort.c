#include <stdio.h>

int main(void) {
	// your code goes here
int a[100], n, i, j, swap,T,k;
 
  scanf("%d", &T);
 for(k=0;k<T;k++)
 {
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
 for (i= 0 ; i< n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
 {
      if (a[j] > a[j+1]) 
      {
        swap  = a[j];
        a[j]   = a[j+1];
        a[j+1] = swap;
      }
    }
  }

  for (i = 0; i < n; i++)
     printf("%d ", a[i]);
}
	return 0;
}


