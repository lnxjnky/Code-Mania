#include<stdio.h>
int main()
{
int x,i,j,sum=0,ans=0,c=0,test,ans1[100];
scanf("%d",&test);
while(c<test)
{
sum=0,ans=0;
scanf("%d",&x);
for(i=1;i<=x;i++)
{
sum=0;
for(j=1;j<i;j++)
{
if(i%j==0)
sum+=j;
}
if(sum==i)
ans+=i;
}
ans1[c]=ans;
c++;
}
for(i=0;i<test;i++)
printf("%d\n",ans1[i]);
}
