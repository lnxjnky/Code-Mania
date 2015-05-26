#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
    int t,i=0,len=0,d1,f1,f2,num,final,k;
    char s[52];
    scanf("%d",&t);

    while(t--)
    {   len=0;
        i=0;
        scanf("%s %d",&s,&k);
        while(s[i]!='\0')
        {
            len++;
            i++;
        }
        f1=fact(len);
        d1=len-k;
        f2=fact(d1);
        final=f1/f2;
        final=final%(1000000007);
        printf("%d\n",final);


    }
    return 0;
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return n* fact(n-1);
}