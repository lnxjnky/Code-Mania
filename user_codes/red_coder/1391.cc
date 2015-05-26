#include<iostream>
using namespace std;

int main()
{
	int n,i,j,t,h;
	float s,q;
	cin>>t;
	while(t--)
	{	
		int count=0;
		cin>>n;
		s=sqrt(n);
		for(i=1;i<s;i++)
		{
			n=n-(i*i);
			q=sqrt(n);
			h=q*10;
			if(h%10==0)
			{
			count=1;
			break;
			}
			else
			n=n+(i*i);
		}
	if(count==1)
	cout<<"Yes"<<"\n";
	else
	cout<<"No"<<"\n";
	}
	return 0;
}