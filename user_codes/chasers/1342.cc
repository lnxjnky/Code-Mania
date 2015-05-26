#include <stdio.h>


int main()
{	
    int sum1=0,sum2=0,i,j,l=0,k=1,t;
    int num;
    int a[100];
    scanf("%d",&t);
    while(k<=t)
    {
    sum2=0;
    scanf("%d",&num);
    i=1;
    for(j=1;j<=num;j++)
    {
      sum1=0;
      for(i=1;i<=j;i++)
      {
       if(j%i==0)
       sum1=sum1+i;
      }
      if(sum1==(2*j))
      sum2=sum2+j;
    }
    a[k-1]=sum2;
    k++;
    }
  for(l=0;l<t;l++)
  printf("%d\n",a[l]);
  return 0;
  
}
