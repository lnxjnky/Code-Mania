#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int n,i,j,t,p,h;
	double q,s;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>n;
		for(i=1;i*i<=n/2;i++)
		{
			q=sqrt(n-(i*i));
			h=q;
			if(h==q)
			{
				count=1;
				break;
			}
		}
	if(count==1)
	cout<<"Yes"<<"\n";
	else
	cout<<"No"<<"\n";
	}
	return 0;
}