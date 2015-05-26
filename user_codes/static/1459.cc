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
			for(j=0;j<=sqrt(n);j++)
			{
				if((i*i+j*j)==n)
				{
					c++;
					if(c==1)	
				 	    printf("Yes\n");
					 
				}
		 	}
		}
		if(c==0)
		printf("No\n");
	t--;
	}
	return 0;
}
		
	
	
	