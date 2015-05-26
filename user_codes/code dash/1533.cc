#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{ int n,x,y[100],i,t,j;
string str;
cin>>n;
for(i=0;i<n;i++)
{
cin>>str;
cin>>x;
y[i]=1;
t=str.length();
for(j=t;j>(t-x);j--)
{
y[i]=y[i]*(j);
}
}
for(i=0;i<n;i++)
{
cout<<y[i];
}
return 0;
}