#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
using namespace std;
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)


bool check(long long int N)
{
  for(long long int i=1;i*i<=N/2;i++)
    {
      double a= sqrt(N-i*i);
      long long int b= a;
      if(a==b)
	return true;
      else 
	return false;
    }
}
int main()
{
  int t;
  si(t);
  while(t--)
    {
      long long int N;
      sl(N);
      if(check(N))
	cout<<"Yes\n";
      else
	cout<<"No\n";
    }
  return 0;
}
