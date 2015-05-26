#include<stdio.h>
#include<string.h>
#include<math.h>

int aladdin(int);


int main()
{
    int cases,i,a,sum=0;
    scanf("%d",&cases);
    for(i=0;i<cases;i++)
    {
        scanf("%d", &a);
        sum= aladdin(a);
        printf("%d\n",sum);

    }
    return (0);

}



int aladdin(int a)
{
    int sum=0,i;
    for(i=2;;i++)
    {
        if(pow(2,i-1)*(pow(2,i)-1)<=a)
            sum+=pow(2,i-1)*(pow(2,i)-1);
        else
            break;
    }
    return (sum);
}
