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
		s=sqrt(n);
		for(i=1;i<s;i++)
		{
			p=n;
			n=n-(i*i);
			q=sqrt(n);
			h=q*10;
			if(h%10==0&&h!=0)
			{
				count=1;
				break;
			}
			else
			n=p;
		}
	if(count==1)
	cout<<"Yes"<<"\n";
	else
	cout<<"No"<<"\n";
	}
	return 0;
}