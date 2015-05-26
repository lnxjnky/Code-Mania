#include<stdio.h>

int main()
{
    int t,n,s,i,count=0,mod,sum,j,temp;;
    int arr[100];

    scanf("%d",&t);

    while(t--)
    {   count=0;
        scanf("%d %d",&n,&s);

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

         for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }


        for(i=n-1;i>=0;i--)
        {
            count=count+s/arr[i];
            mod=s%arr[i];


               s=mod;
        }
        if(mod==0)
            {
                printf("%d\n",count);
            }
        else
            printf("%d\n",0);

    }

return 0;
}
