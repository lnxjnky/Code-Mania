#include<stdio.h>
#include<math.h>

int func(int);
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        if(func(n))printf("Yes\n");
        else printf("No\n");
        t--;
    }
    //getch();
    return 0;
}        
        
int func(int n)
{
    int i=1,k,flag=0;

    
    double temp_frac, a, b;
    do
    {
        a = pow(i,2);
        b = sqrt(n-a);
        if( a > n )
            break;
        else if( i > b )
            break;
        else if( modf(b, &temp_frac) == 0 )
        {
            
            k=b;//printf("%d %d",i,k);
            if(i!=k)flag=1;
            //if(i==0||k==0)flag=0;
        }
        ++i;
    }
    while(1);
    return flag;
}