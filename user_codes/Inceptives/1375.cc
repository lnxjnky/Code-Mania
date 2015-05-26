#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,S,v[100],x,z,y=0;
   cin>>t;
   cin>>n;
   cin>>S;
   for(int i=1;i<=n;i++)
   	cin>>v[i];
   for(int i=0;i<t;i++)
   {
   	for(int j=n;j>=1;j--)
      {  
      	x=v[j];
         z=z+x;
      	while(1)
         {
         	if(S>=z)
            {
            	z=z+x;
               y++;
            }
            else
            {
		z=z-x;
               break;
            }
         }

      }
   cout<<y<<endl;
   }
   return 0;
}