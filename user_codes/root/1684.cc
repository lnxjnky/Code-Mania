#include<iostream>

#include<stdlib.h>
using namespace std;



int main()
{
	int tcases;
	cin>>tcases;
	for(int i=0;i<tcases;i++)
	{
		int n=0;
		int s=0;
		cin>>n;
		cin>>s;
		int *d=(int*)calloc(n,sizeof(int));
		for(int l=0;l<n;l++)
			cin>>d[l];
		for(int h=0;h<n-2;h++)
			for(int m=1;m<n-1;m++)
				if(d[h]>d[m])
				{
					int temp;
					temp=d[h];
					d[h]=d[m];
					d[m]=d[h];
				}
	
	

		int k=0;
		int count=0;
		for(int i=n-1;i>=0;i--)
		{
			while(k<=s)
			{
				k=d[i]+k;
				
				count++;
			}
			
			if(k==s)
			{
				break;
				
			}
			else
			{
				k=k-d[i];
				
				count--;
			}

		}
		cout<<count;


		
		cout<<endl;

	}

	return 0;
}
