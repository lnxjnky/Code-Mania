#include<stdio.h>

int main()
{
    int t,i,j,sum,sump,n;

    scanf("%d",&t);

    while(t--)
    {   sump=0;
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {   sum=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    sum=sum+j;
            }
            if(sum==(2*i))
                sump=sump+i;
        }
        printf("%d\n",sump);
    }

return 0;
}
