#include<stdio.h>

int main()
{
int T=0,L=0,c=0,d=0,i=0,j=0,k=0;
scanf("%d",&T);

for(i=1;i<=T;i++)
{
scanf("%d",&L);
for(j=1;j<=L;j++)
{
c=0;
for(k=1;k<=j;k++)
{

if((j%k)==0)
c=c+k;
}
if(c==(2*j))
d=d+j;
}
printf("%d",d);
}
return 0;
}
