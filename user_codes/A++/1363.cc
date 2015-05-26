#include<stdio.h>
#include<string.h>
#include<math.h>


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
        sum=aladdin2(a);
        printf("%d\n",sum);

    }
    return (0);

}





long int aladdin2(int a)
{
    int i,t=0;
    long int sum=0;
    for(i=2;i<=a;i+=1)
    {
        t=perfect(i);
        if(t==1)
        {
            sum+=i;
        }
    }

    return (sum);
}

int perfect(int a)
{
    int sum=1,i;
    for(i=2;i<a;i++)
    {
        if((a%i)==0)
            sum+=i;
    }

    if(sum == a)
        return(1);
    else
        return(0);
}
