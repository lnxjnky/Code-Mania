#include<stdio.h>
//#include<conio.h>
int main()
{
    float i,j,num;
    int t,k;
    scanf("%d",&t);
    int a[t+1];
    for(k=1;k<=t;k++)
    {
    scanf("%f",&num);
    for(i=1;i<=num/2;i++)
    {for(j=i;j<=num;j++)
    {
        if(((i*i)+(j*j))==num)
       { 

       a[k]=1;
      // printf("%d,%d\n",i*i,j*j);
      // printf("yes\n");
       goto l;
       } 
        else
        a[k]=0;             
               }
                       }
                      /* if(s==1)
                      // printf("yes");*/
                       //if(a[k]==0)
                       //printf("no\n");
                       l:;
             }
             for(k=1;k<=t;k++)
             printf("%d\n",a[k]);
   // getch();}
