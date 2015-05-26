#include<iostream>
#include<conio.h>
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
for(j=1;j<=t;j++)
{
if(x!=0)
{
y=y*(x);
x--;
}
}
cout<<y;
}
return 0;
}