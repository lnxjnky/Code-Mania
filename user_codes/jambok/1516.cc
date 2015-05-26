#include<stdio.h>
int main()
{
      int t,i,j,k,n;
      int l[1000];
      int s=0;
      int s1=0;
      int p=1;
      printf("%d",t);
      scanf("%d",&t);
      for(i=0;(i<t)&&(t>=1 && t<=100);i++)
      {
                           printf("%d",l[i]);
                           scanf("%d",&l[i]);
      }
      for(i=0;(i<t)&&(t>=1 && t<=100);i++)
      {
                      for(j=1;(j<=1)&&(l[i]>=1 && l[i]<=10000);j++)
                      {
                                                     p=2*j;
                                                     for(k=1;k<=j;k++)
                                                     {
                                                                      if((j%k)==0)
                                                                      {
                                                                                  s=s+j;
                                                                      }
                                                     }
                                                     if(p==s)
                                                     {
                                                             n=j;
                                                     }
                                                     s1=s1+n;
                                                     n=0;
                      }
                      printf("%d",s1);
      }
      return 0;
}
      
