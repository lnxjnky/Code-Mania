#include<stdio.h>
int main()
{
int a[161];
int b[161];
char f[100];
int z,l,k2,m,k,d4,k1,x,n1,p,i,y,j,n;
scanf("%d",&n);
while(n!=0)
{
 d4=2;
 scanf("%s",f);
 for(z=0;f[z]!='\0';z++);
 scanf("%d",&x);
for(j=1;j<=160;j++)
{
a[j]=0;
b[j]=0;
}
a[160]=1;
for(i=(z-x+1);i<=z;i++)
{
k=160;
while(k!=0)
{
p=a[k]*i;
b[k]=p;
k--;
}
l=160;
while(l>0)
{
k1=b[l]%10;
k2=b[l]/10;
a[l]=k1;
b[l-1]=b[l-1]+k2;
l--;
}
}
for(m=1;m<=160;m++)
{
if(a[m]!=0)
break;
}
while((m<=160)&&(d4<10))
{
printf("%d",a[m]);
m++;
d4++;
}
n--;
}
return 0;
 
}
