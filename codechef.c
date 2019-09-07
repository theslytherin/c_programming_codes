#include<stdio.h>
#include <string.h>
/* Name of the class has to be "Main" only if the class is public. */
int main() {
	int r[100],a[100],b[100],T,num,n,i,j,k,c=0,d;
	         scanf("%d",&T);
                for( i=0;i<T;i++)
                { scanf("%s",&a);
                  n=strlen(a);
                  printf("%d",n);
                 for(j=0;j<n;j++)
                    { 
                        if(a[j]=='1')
                        { 
                           {   if(j!=n-1)
                               {
                               if(a[j+1]!='-1'&&a[j+1]=='0')
                               a[j+1]='1';
                               else
                                if(a[j+1]!='-1'&&a[j+1]=='1')
                               a[j+1]='0';
                            }
                               if(j!=0)
                               {
                               if(a[j-1]!='-1'&&a[j-1]=='1')
                               a[j-1]='0';
                               else
                               if(a[j-1]!='-1'&&a[j-1]=='0')
                                a[j-1]='1';
                            }
                        }
                          a[j]='-1';
                          j=-1;
                        }
                       }
                       printf("%s",a);
                        for(k=0;k<n;k++)
                         {
                             if(a[k]!='-1')
                             {
                             r[i]=0;
                             break;
                            }
                            r[i]=1;
                        }
                    }
                    for(i=0;i<T;i++)
                    {
                        if(r[i]==1)
                        printf("WIN\n");
                        else
                        printf("LOSE\n");
                    }
                }
                
            
        
                           
 
                
            
        
                           
 
