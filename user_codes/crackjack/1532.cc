#include<stdio.h>

int main()
{
int T=0,c=0,d=0,i=0,j=0,k=0,s=0;
scanf("%d",&T);
int L[T-1];
for(i=0;i<T;i++)
scanf("%d",&L[i]);

while(s!=T)
{d=0;
for(j=1;j<=L[s];j++)
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
printf("%d\n",d);
s++;
}
return 0;
}
