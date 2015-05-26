#include<stdio.h>
int check(int num)
{
    int i,j;
    for(i=1;i<=num/2;i++)
     {for (j=1;j<=num/2;j++)
       if(num==(i*i+j*j))
       return 1;
     } 
   return 0;
}   
int main()
{
    int i,t,n,c[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
      scanf("%d",&n);
      if(check(n))
      c[i]=1;
      else
      c[i]=0; 
      }
    for(i=0;i<t;i++)
     if(c[i]==1)
      printf("\nYes");  
     else
     printf("\nNo");
   
}   