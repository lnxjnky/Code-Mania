#include <stdio.h>
main()
{
    int t,i,j,s,s1,n,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        s1=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=i/2;j++)
            {
                if(i%j==0)
                s=s+j;
            }
            s=s+i;
            if(s==i*2)
            s1=s1+i;
        }
        printf("%d\n",s1);
    }
}
            