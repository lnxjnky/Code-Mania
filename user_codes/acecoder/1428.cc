#include<iostream>
using namespace std;
#include<math.h>
#define MAX 10000
int sq(int n)
 { return n*n;
} 
 int main()
{ int j,t,n,i,flag=0;
 long int a[MAX][MAX];
 for(i=0;i*i<MAX;i++)
  for(j=0;j*j<MAX;j++)
   a[i][j]=sq(i+1)+sq(j+1);
cin>>t;
while(t--)
{ cin>>n;
  for(i=0;i*i<MAX;i++)
  for(j=i;j*j<MAX;j++)
   if(a[i][j]==n)
   {cout<<"YES"<<endl;flag=1;
    break;
   }

  if(flag==0)
   cout<<"NO"<<endl;
}
return 0;
}
