#include<iostream>
#include<math.h>




using namespace std;
int fact(int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
		return n*fact(n-1);
}



int main()
{
	int tcases;
	cin>>tcases;
	for(int i=0;i<tcases;i++)
	{
		long double n;
		cin>>n;
		long int sroot=(long int)sqrt(n);
		
		long int j=1;
		do
		{ 
		if(sroot*sroot+j*j==n)
		{
			cout<<"Yes";
			break;
		}
		else if((sroot*sroot+j*j)>n)
		sroot--;
		else if((sroot*sroot+j*j)<n)
			j++;
	
		if(j>sroot)
		{
			cout<<"No";
			break;
		}
	

		}while(j<=sroot);
	cout<<endl;
	}

		

		

	
	


		
	

	return 0;
}