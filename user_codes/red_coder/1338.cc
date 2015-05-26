#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
using namespace std;
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)

int main()
{
  int t;
  si(t);
  while(t--)
    {
      int n,S,A[100];
      si(n);
      si(S);
      for(int i=0;i<n;i++)
	si(A[i]);
      int SS[1000];
      SS[0]=0;
      for(int i=1;i<=S;i++)
	{
	  int min=10000000;
	  for(int j=0;j<n;j++)
	    if(i-A[j]>=0)
	      if(SS[i-A[j]]+1<min)
		min= SS[i-A[j]]+1;
	  SS[i]= min;;
	}
      cout<<SS[S]<<"\n";
    }
  return 0;
}
