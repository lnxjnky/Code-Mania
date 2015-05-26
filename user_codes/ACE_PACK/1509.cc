#include<stdio.h>
int c[102];
int d[102];
int main()
{
    int i,j,t,k,n,min,p;

   scanf("%d",&t);
   while(t)
   {
   scanf("%d",&k); scanf("%d",&n);

   for(p=1;p<=k;p++)
    {
     scanf("%d",&d[p]);
    }

    c[0]=0;

    for(p=1;p<=n;p++)
    {
        min=999999;
        for(i=1;i<=k;i++)
        {
            if(d[i]<=p)
            {
                if((1+c[p-d[i]])<min)
                {
                    min=(1+c[p-d[i]]);

                }
            }
        }
        c[p]=min;

    }
printf("%d\n",c[n]);
t--;
   }

    return 0;
}
