#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n[100],S[100],v[100][100],x,z,y=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
   	cin>>n[i];
   	cin>>S[i];
  	 	for(int j=1;j<=n[i];j++)
 	  		cin>>v[i][j];
   }
   for(int i=0;i<t;i++)
   {
   	for(int j=n[i];j>=1;j--)
      {
      	x=v[i][j];
         z=z+x;
      	while(1)
         {
         	if(S[i]>=z)
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