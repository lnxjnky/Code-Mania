#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{ int n,x,y,i,t,j;
string str;
cin>>n;
for(i=0;i<n;i++)
{
cin>>str;
cin>>x;
y=1;
t=str.length();
for(j=t;j>(t-x);j--)
{
y=y*(j);
}
cout<<y;
}
return 0;
}