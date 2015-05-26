#include<iostream>
using namespace std;

long long int findperfect(int n)
{
	int i,j,sum=0;
	long long int res=0;
	for(i=5;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			sum+=j;
		}
		if(sum==2*i)
		res+=i;
		sum=0;
	}
	return res;
}
	
	

int main()
{
	int n,i,j,t;
	long long int sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=findperfect(n);
		cout<<sum;
		sum=0;
	}
	return 0;
}