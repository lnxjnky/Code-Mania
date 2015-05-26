#include <stdio.h>
int slen(char []);
long fact(int);
int main()
{
    char a[100][52];
    int t,k[100],i,len;
    long h;
    scanf("%d",&t);
    for(i=0;i<t;i++)
     scanf("%s %d",&a[i],&k[i]);
    for(i=0;i<t;i++)
    {
       len=slen(a[i]);
       h=fact(len)/(fact(k[i])*fact(len-k[i]));
       h*=fact(k[i]);      
       h=h%(1000000000+7);
       k[i]=h;
     }
     for(i=0;i<t;i++)
        printf("%d\n",k[i]);
     return 0;
}
       
long fact(int x)
{
    int i;
    long p=1;
    for(i=1;i<=x;i++)
     p=p*i;
    return p;
}
int slen(char a[])
{
    int len=0,i=0;
    while(a[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
   
