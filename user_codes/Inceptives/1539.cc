#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int t,k, ps(int),flag=0;
   long n[100];
   cin>>t;
   for(int i=0;i<t;i++)
   	cin>>n[i];
   for(int i=0;i<t;i++)
   {
   	int l=(n[i]/2)+1;
   	for(int j=1;j<=l;j++)
      {
      	int b=sqrt(j);
          if(b*b==j)
          {
          	k=n[i]-j;
            int a=sqrt(k);
            if(a*a==k)
            {
            	cout<<"Yes"<<endl;
               flag=1;
               break;
            }
          }
      }
      if(flag==0)
      	cout<<"No"<<endl;
   }
	return 0;
}