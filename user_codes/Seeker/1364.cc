#include<stdio.h>

int main()
{
      int t, i, n,j,count,k, s1,s2;
      scanf("%d",&t);
      int a[t];
      for(i=0;i<t;i++)
      {
        scanf("%d",&a[i]);           
      }
      for(i=0;i<t;i++)
                      {
                      s1=0;
                      n=a[i];
                      for(j=6;j<=n;j++)
                                       {
                                       s2=1;
                                        for(k=2;k<=j;k++)
                                                        {
                                                        if(j%k==0){
                                                        s2=s2+k;
                                                        }
                                        }
                                        if( s2 == 2*j){
                                            s1 = s1 + j;
                                            }
                                            }
                                            printf("%d \n", s1 );
        } 
return 0;        

}      
