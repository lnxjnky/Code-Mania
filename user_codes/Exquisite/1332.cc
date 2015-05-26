#include<stdio.h>

int main()
{
      int t,n[100],s=0,i,j,x,sum=0;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      scanf("%d",&n[i]);
      
     for(j=0;j<t;j++)
      {sum=0;
              for(x=1;x<=n[j];x++)
              {
                                  s=0;
                                  for(i=1;i<=x;i++)
                                  {
                                                   if(x%i==0)
                                                   s=s+i;
                                  }
                                  if(s==2*x)
                                  sum+=x;
              }
              printf("%d\n",sum);
       }
                                          
      return 0;
}
              