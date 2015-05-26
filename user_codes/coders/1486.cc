#include <stdio.h>
int slen(char []);
long fact(long);
int main()
{
    char a[100][60];
    int t,i;
    long h,len,k[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
     scanf("%s %ld",&a[i],&k[i]);
    for(i=0;i<t;i++)
    {
       len=slen(a[i]);
       h=fact(len)/(fact(k[i])*fact(len-k[i]));    
       h=(h*fact(k[i]))%(1000000000+7);
       k[i]=h;
     }
     for(i=0;i<t;i++)
        printf("%ld\n",k[i]);
     return 0;
}
       
long fact(long x)
{
    int i;
    long p=1;
    if(x==0) return 1;
    else
    {
      for(i=1;i<=x;i++)
       p=p*i;
    }
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
   
