#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int n,x,y[100],i,t,j,s[100];
cin>>n;
for(i=0;i<n;i++)
{
cin>>y[i];
}
for(i=0;i<n;i++)
{
s[i]=0;
for(j=1;j<=y[i];j++)
{
x=0;
for(t=1;t<=j;t++)
{
if(j%t==0)
{
x=x+t;
}}
if(x==2*j)
{
s[i]= s[i]+x;
}
}
}
for(i=0;i<n;i++)
{
cout<<s[i];
}
return 0;
}

