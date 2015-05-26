#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,l[100],z,y;
   cin>>t;
   for(int i=0;i<t;i++)
   	cin>>l[i];
   for(int j=0;j<t;j++)
   {
   	y=0;
   	for(int i=1; i<=l[j];i++)
      {
      	z=0;
         for(int k=1;k<=i;k++)
         {
				if(i%k==0)
         		z=z+k;
         }
      	if(z==2*i)
      	{
      		y+=z/2;
   	   }
      }
      cout<<y<<endl;
   }
   return 0;
}
