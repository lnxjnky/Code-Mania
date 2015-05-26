#include <stdio.h>
int perfect(int);
int main()
{
    int t,a[100],i,sum=0,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
      scanf("%d",&a[i]);
    for(i=0;i<t;i++)
    {
       for(j=1;j<=a[i];j++)
        sum+=perfect(j);
       a[i]=sum;
       sum=0;
    }
    for(i=0;i<t;i++)
    printf("%d\n",a[i]);
    return 0;
}
int perfect(int a)
{
    int j,sum=0;
    for(j=1;j<=a;j++)
          if(a%j==0)
            sum+=j;
    if(sum==2*a)
    return a;
    return 0;
}
