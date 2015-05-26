#include<stdio.h>

int main()
{   int t,i,j,n,flag=0;

    scanf("%d",&t);

    while(t--)
    {   flag=0;
        scanf("%d",&n);
        for(i=1;i*i<n;i++)
        {
            for(j=1;(j<=i)&&(j*j+i*i<=n);j++)
            {
                if((j*j)+(i*i)==n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag!=0)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");

    }
    return 0;
}
