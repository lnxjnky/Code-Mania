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
		char a[52];
		int k=0;
		int  total;
		cin>>a;
		cin>>k;
		int j=0;
		while(a[j]!='\0')
			j++;
	
		total=fact(j)/fact(j-k);
		cout<<total;
		
		total=total%((int)pow(10.0,9)+7);
		cout<<total;






	cout<<endl;
	}

		

		

	
	


		

	return 0;
}
