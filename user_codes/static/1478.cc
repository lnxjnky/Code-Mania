#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,t,c=0;
	scanf("%d",&t);
	while(t>0)
	{
		c=0;
		scanf("%u",&n);
		for(i=0;i<=sqrt(n);i++)
		{
			for(j=sqrt(n);j>=0;j--)
			{
				if((i*i+j*j)==n)
				{
					c=1;
					 goto aa;
			
				}
		 	}
		}
		aa:if(c==0)
		printf("No\n");
		else

		printf("Yes\n");
	t--;
	}
	return 0;
}
		
	
	
	