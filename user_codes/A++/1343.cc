#include<stdio.h>
#include<string.h>
#include<math.h>

long int aladdin1(int);
long int aladdin2(int);
int perfect(int);


int main()
{
    int cases,i,a;
    long int sum = 0;
    scanf("%d",&cases);
    for(i=0;i<cases;i++)
    {
        scanf("%d", &a);
        sum= aladdin1(a);
        sum+=aladdin2(a);
        printf("%d\n",sum);

    }
    return (0);

}



long int aladdin1(int a)
{
    int i;
    long int sum=0;
    for(i=2;;i++)
    {
        if(pow(2,i-1)*(pow(2,i)-1)<=a)
            sum+=pow(2,i-1)*(pow(2,i)-1);
        else
            break;
    }
    return (sum);
}

long int aladdin2(int a)
{
    int i,t=0;
    long int sum=0;
    for(i=3;i<=a;i+=2)
    {
        t=perfect(a);
        if(t==1)
            sum+=a;
    }
    return (sum);
}

int perfect(int a)
{
    int sum=1,i;
    for(i=3;i<a;i++)
    {
        if((a%2)==0)
            sum+=i;
    }
    if(sum==a)
        return (1);
    return (0);
}
