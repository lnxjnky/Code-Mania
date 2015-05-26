#include<stdio.h>
#include<math.h>
void main()
{
       int T,N[100];
       scanf("%d",&T);
       for(int p=0;p<T;p++)
       scanf("%d",&N[p]);
       int z=0,q=0,flag=0;
       while(z<T)
       {
                 int j=0,l=0;
                   int val=N[z];
                   l=j*j;
                   while(l<val)
                   {
                               q=val-l;
                              int i=0,m=0;
                              int k=q;
                              m=i*i;
                              while(m<k || m==k)
                              {
                              if(m==k)
                              flag++;
                              else 
                              flag=0;
                              i++;
                              m=i*i;
                              }
                              if(flag!=0)
                              {
                                  printf("\nyes");
                                  break;
                                  }
                   j++;
                   l=j*j;
                   }
                   if(flag==0)
                   printf("\nno");
                               z++;
                               }
                   
  }
                               
                                     
