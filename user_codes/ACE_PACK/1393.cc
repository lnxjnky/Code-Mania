#include<stdio.h>
#include<string.h>
#define m 1000000007
long long int prod;
int main()
{
    int t,l,k;
    char a[53];
     scanf("%d",&t);
    while(t)
    {
        scanf("%s",a);
        scanf("%d",&k);
        l=strlen(a);
      //  printf("%d  %d\n",l,k);
       k=l-k;

       prod=1;k++;
      //  printf("%d  %d\n",l,k);
       while(k<=l)
       {
           prod*=k;
           if(prod>m)
           prod=prod%m;

          k++;
       }
printf("%llu\n",prod);
        t--;
    }

    return 0;
}
