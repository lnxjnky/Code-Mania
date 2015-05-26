#include<iostream>
using namespace std;
#define MAX 1111
  int min(int a,int b)
  { if(a<b)
   return a;
   else return b;
}
 int main()
 { int j,t,n,l[100],s,i;
 int c[100][100];
   cin>>t;
   while(t--)
   { l[0]=0;
    cin>>n>>s;
     for(i=1;i<=n;i++)
     cin>>l[i];
    
      for(i=0;i<=n;i++)
     c[i][0]=0;
     for(j=0;j<=s;j++)
      c[0][j]=MAX;
    
     for(i=1;i<=n;i++)
      for(j=1;j<=s;j++)
      if(l[i]==j)
      c[i][j]=1;
      else if(l[i]<j)
      c[i][j]=min(c[i-1][j],1+c[i][j-l[i]]);
      else 
      c[i][j]=c[i-1][j];
      
      cout<<c[n][s]<<endl;
      }
     
      return 0;
      }
      
