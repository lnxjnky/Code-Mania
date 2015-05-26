#include<iostream>
#include<stdio.h>
using namespace std;
void insort(int a[], int);
int main()
{
	int t,n[100],S[100],v[100][100],a[100],m,x,z,y=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
   	cin>>n[i];
   	cin>>S[i];
  	 	for(int j=0;j<n[i];j++)
 	  		cin>>v[i][j];
   }
   for(int i=0;i<t;i++)
   {
   	m=n[i];
   	for(int j=0;j<m;j++)
        	a[j]=v[i][j];
      insort(a,m);
   	for(int j=m-1;j>=0;j--)
      {
      	x=a[j];
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
void insort(int a[], int n)
{
	int tmp,j,i;
	for(i=1;i<n;i++)
   {
		tmp=a[i];
   	for(j=i;j>0 && a[j-1]>tmp;j--)
      	a[j]=a[j-1];
      a[j]=tmp;
   }
}
