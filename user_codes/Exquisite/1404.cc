#include<stdio.h>
#include<math.h>
int main()
{
      int t,i,j,k,f=0,sum=0;
      char n[100];
      scanf("%d",&t);
      for(i=0;i<t;i++)
      scanf("%d",&n[i]);
      for(i=0;i<t;i++)
      {f=0;
                      for(j=1;j<=(int)sqrt(n[i]);j++)
                      {
                                                     for(k=j+1;k<=(int)sqrt(n[i]);k++)
                                                     {
                                                                                      sum=j*j+k*k;
                                                                                      if(sum==n[i])
                                                                                      
                                                                                      f=1;
                                                                                      
                                                     }
                      }
                      if(f==1)
                      printf("Yes\n");
                      else 
                      printf("No\n");
      }
                                                                                      
     
      return 0;                                                                                
      
      
      
                        
}
              