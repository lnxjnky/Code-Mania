#include<stdio.h>
#include<string.h>

void ans(int A[20][20],int , int , int);


int main()
{
    int cases,i,j,k,n,s,K;
    int A[20][20];
    long int sum = 0;
    scanf("%d",&cases);
    for(i=0;i<cases;i++)
    {
        scanf("%d %d %d",&n,&s,&K);
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                scanf("%d",&A[i][j]);
                ans(A,n,s,K);
    }
    return(0);
}

void ans(int A[20][20],int n,int s,int K)
{
    int i,j,t=0,b=50;
    while(t<K)
    {
        for(i=n-1;i>=0;i--)
        {
            if(A[i][s-1]==1 && b>i)
                b=i;
        }
        s=b;
        if(s==0)
            break;
        t++;
    }

    if(t<=K)
        printf("Yes");
    else
        printf("No");
}
