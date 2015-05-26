#include<stdio.h>
int main()
{
    long long i,j,k,p,n;
    int t;
    
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        scanf("%lld",&n);
        for(i=1;i<n;i++)
        {
        for(j=1;j<n;j++)
        {
            k=(i*i)+(j*j);
            if(k>n)
            break;
            if(k==n)
            { p++;
             break;
        }}
    }  
        
        if(p==0)
          printf("no\n");
          else
          printf("yes\n");
        }
            return 0;
}
