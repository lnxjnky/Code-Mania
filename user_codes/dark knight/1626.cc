#include<stdio.h>
//#include<conio.h>
long double fact(int n);
int main()
{
    char a[52];
    int l,j,t;
    long double res;
    scanf("%d",&t);
    int r[t+1];
    for(j=1;j<=t;j++)
    {
    scanf("%s %d",a,&l);
    
    int i=0,s=0,res=0;
    while(a[i]!='\0')
    {
           s=s+1;   
           i++;       }
           //printf("%d",s);
           res=fact(s)/fact(s-l);
          // if(res>1000000000)
           res=res%(1000000000);
           r[j]=res;}
           for(j=1;j<=t;j++)
           printf("%d\n",r[j]);
          // getch();
    }
long double fact(int n)
{long double i,p=1;
for(i=1;i<=n;i++)
p=p*i;
return(p);
    }
