#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{      
       int t,n,s;
       scanf("%d",&t); //cases
       for(int i=0;i<t;i++)
       {
               int p;
               printf("number of denomination?");
               scanf("%d",&n);
               printf("price?");
               scanf("%d",&p);
               int a[n];
               for(int j=0;j<n;j++)
               {
                       printf("values");
                       scanf("%d",&a[j]);// value of denominations
                       }
                       int sum=0;
                       int k;
                       for(k=n-1;k>=0 && p!=0;k--)
                       {
                                          sum+=p/a[k];
                                          p=p%a[k];
                                          }
                                          
                                          printf("%d",sum);
                                          }
                                          getch();
               
}
