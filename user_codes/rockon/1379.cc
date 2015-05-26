#include<stdio.h>
int main()
{
int n,i,c=0;
printf("\nEnter a no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c=c+i;
}
}
if(2n==c)
printf("\nPerfect no.");
else
printf("\nNot a perfect no.");
