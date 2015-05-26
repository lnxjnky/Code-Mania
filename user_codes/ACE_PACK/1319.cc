#include<stdio.h>
long long s,ss;
int main()
{

     int t,n,i,j;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);ss=0;
        for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=(i/2);j++)
            {
                if(i%j==0)
                s+=j;
            }
            if(s==i)
           ss+=i;
        }
       printf("%llu\n",ss);

        t--;
    }
    return 0;
}

