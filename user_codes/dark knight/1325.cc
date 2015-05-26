#include<stdio.h>
//#include<conio.h>
int main()
{
    int i,j,k,l,n,t,o=0;
    scanf("%d",&t);
    int out[t+1];
    for(l=1;l<=t;l++)
    {
    scanf("%d",&n);
    int a[n+1];
    for(j=1;j<=n;j++)
    {o=0;
    for(i=1;i<=j;i++)
    {if(j%i==0)
    o=o+i;
     }
     if(o==2*j)
     {
        a[j]=j;}
        else
        a[j]=0;
        }
        int s=0;
        for(k=1;k<=n;k++)
        {s=s+a[k];
        } 
        out[l]=s;
        }  
        for(l=1;l<=t;l++)
        printf("%d\n",out[l]);           
    //getch();}
