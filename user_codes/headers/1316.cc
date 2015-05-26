#include<iostream>

using namespace std;


int main()
{
	int tcases;
	cin>>tcases;
	for(int i=0;i<tcases;i++)
	{
		int n;
		cin>>n;
		int total=0;
		for(int j=1;j<=n;j++)
		{
			int sum=0;
			for(int k=1;k<=j/2;k++)
			
			 
				if(j%k==0)
					sum=sum+k;
			sum=sum+j;
				
				
			
			if(sum==2*j)
				total=total+j;

		}
		cout<<total;
		cout<<endl;

	}

	
	return 0;
}
