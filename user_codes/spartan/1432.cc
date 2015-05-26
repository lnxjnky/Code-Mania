#include<stdio.h>

int main()
{   int t,i,j,n,flag=0,k,p;

    scanf("%d",&t);

    while(t--)
    {   flag=0;
        scanf("%d",&n);
        for(i=1;i*i<n;i++)
        {   k=n-(i*i);
            
                for(j=1;j*j<=k;j++)
            {
                
                 if((k-(j*j))==0)
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