#include<stdio.h>
#include<string.h>

int A[20][20];
void ans(int , int , int);



int main()
{
    int cases,i,j,k,n,s,K;
    long int sum = 0;
    scanf("%d",&cases);
    for(i=0;i<cases;i++)
    {
        scanf("%d %d %d",&n,&s,&K);
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                scanf("%d",&A[j][k]);
                ans(n,s,K);
    }
    return(0);
}

void ans(int n,int s,int K)
{
    int i,j,t=0,b=50,m=0;
    s--;
    while(t!=K)
    {
        for(i=n-1;i>=0;i--)
        {
            if(A[i][s]==1 && b>i && i!=s)
            {
                b=i;
            }
        }
        s=b;
        if(s==0)
        {
            m=1;
            break;

        }
        t++;
    }

    if((t==K || m==1)&&s==0)
        printf("Yes\n");
    else
        printf("No\n");
}
