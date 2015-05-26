#include<stdio.h>
int main()
{
    int c[1001],val,n_coin,price;
    int a[101],test,b,a1,d;
    scanf("%d",&test);
    for(a1=1;a1<=test;a1++)
    {
        scanf("%d %d",&n_coin,&val);
        c[0]=0;
            for(b=0;b<n_coin;b++)
            {
                    scanf("%d",&a[b]);
            }
            for(b=1;b<=val;b++)
            {
                c[b]=9000;
                for(d=0;d<n_coin;d++)
                {
                 if(a[d]<=b && 1+c[b-a[d]]<c[b])
                 c[b]=1+c[b-a[d]];
                }


                }

            printf("%d\n",c[val]);
}
return 0;
}


