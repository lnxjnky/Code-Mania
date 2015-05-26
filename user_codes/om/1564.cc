#include<stdio.h>
#define T 100
#include<math.h>
int main()
{
	int a[T];
	int i, j ,k,l,n, sum=0,flag=0;
	double m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=0;j<n;j++)
	{
	m= sqrt(a[j]);
	for(k=1;k<=m;k++)
	{
		for(l=k+1;l<=m;l++)
		{
			sum=l*l+k*k;
			if(sum==a[j])
			{flag=1;
			break;}
			else
			flag=0;
		}
	if(flag==1)
	break;
	}
	if(flag==1)
	printf("yes\n");
	else
	printf("no\n");
	}
}	
			
	