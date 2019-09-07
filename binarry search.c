
#include <stdio.h>

int main(void) {
	// your code goes here
int a[100000],b[10],n, i,T,k,s,first,middle,last,q,pos=0,d;
 
  scanf("%d", &T);
 for(k=0;k<T;k++)
 {
  scanf("%d", &n);
   scanf("%d",&q);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
   
    for(d=0;d<q;d++)
    {
    
    scanf("%d",&s);
  first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (a[middle] < s)
         first = middle + 1;    
      else if (a[middle] == s) {
         b[pos]=1;
         pos++;
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      {
      b[pos]=0;
      pos++;
}
}
}
for(i=0;i<pos;i++)
{
if(b[i]==1)
 printf("YES\n");
 else
 printf("NO\n");
}
 	return 0;
}


  
