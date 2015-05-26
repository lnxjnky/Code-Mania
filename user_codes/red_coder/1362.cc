#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
    {
      int n,S,A[100];
      scanf("%d%d",&n,&S);
      for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
      int SS[1000];
      for(int i=1;i<=1000;i++)
	SS[i]=1000000;
      SS[0]=0;
      for(int i=1;i<=S;i++)
	{
	  for(int j=0;j<n;j++)
	    if(A[j]<=i && SS[i-A[j]]+1<SS[i])
	      SS[i]=SS[i-A[j]]+1;
	}
      cout<<SS[S]<<"\n";
    }
  return 0;
}
