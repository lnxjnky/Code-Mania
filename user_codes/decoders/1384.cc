#include<stdio.h>
int main()
{
    int i,j,k=0,t,n,s;
    scanf("%d",&t);
    while(t--)
    {
      k=0;  
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            s=0;
            for(i=1;i<=j;i++)
            if(j%i==0)
            s+=i;
            if(s==2*j)
            k+=j;
            s=0;
        }
        printf("%d\n",k);
    }
    return 0;
}
