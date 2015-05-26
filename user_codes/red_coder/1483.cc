#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
using namespace std;
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define mod 1000000007


long long int fact(int n,int m)
{
  long long int pro=1;
  for(int i=n;i>=m;i--)
    {
      pro*=i;
      pro%=mod;
    }
  return pro;
}

int main()
{
  int t;
  si(t);
  while(t--)
    {
      string A;
      cin>>A;
      int k;
      si(k);
      int a= A.size();
      long long int b= fact(a,a-k+1);
      cout<<b<<"\n";
    }
  return 0;

}
