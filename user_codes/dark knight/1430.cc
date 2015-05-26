
#include<stdio.h>
int main()
{
    float i,j,num;
    int t,k;
    scanf("%d",&t);
    int a[t+1];
    for(k=1;k<=t;k++)
    {a[k]=0;
    scanf("%f",&num);
    for(i=1;i<=num/2;i++)
    {for(j=i;j<=num;j++)
    {
        if(((i*i)+(j*j))==num)
       { 

       a[k]=1;
       break;
       break;
       break;
       }              
               }
                       }
                      
                       
             }
             for(k=1;k<=t;k++)
             {if(a[k]==1)
             printf("yes\n");
             else
             printf("no\n");
                              }
   }
