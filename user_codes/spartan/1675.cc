#include<stdio.h>

int main()
{
     int t,n,s,i,count=0,mod,sum,j,temp,k,p;
     int arr[100];

    scanf("%d",&t);

    while(t--)
    {   count=0;

        scanf("%d %d",&n,&s);

        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }

         for(k=0;k<n;k++)
        {
            for(j=k;j<n;j++)
            {
                if(arr[j]<arr[k])
                {
                    temp=arr[k];
                    arr[k]=arr[j];
                    arr[j]=temp;
                }
            }
        }


        for(i=n-1;i>=0;i--)
        {
            count=count+ s/arr[i];
            mod=s%arr[i];
               s=mod;
        }
        if(mod==0)
                printf("%d\n",count);

        else
            printf("%d\n",0);

    }

return 0;
}
