#include<stdio.h>
int main()
{
	int d,i,j,n,p=0,s=0;
	scanf("%d",&d);
	while(d>0){p=0;
	scanf("%d",&n);
	if((n>=1)&&(n<=5))
	{
		printf("%d",0);
		
	}
	else
	{
	for(i=6;i<=n;i++)
	
	{s=0;
	for(j=1;j<=(i/2);j++)
	{
	
		if(i%j==0)
		           s=s+j;
	}
	if((s+i)==2*i)
	     p=p+s;
	
	}
	printf("%d",p);
	}
	d--;
	}
	return 0;
}