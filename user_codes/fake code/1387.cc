#include<stdio.h>
int main()
{
int T,i=0,lower,num=0,sum=0,temp,factor,temp1;
scanf("%d",&T);
int l[T];
int res[T];
	while(i<T)
	{
	scanf("%d",&l[i]);	
	if(l[i]<6)
	{
		res[i]=0;
	}	
	else
		{
			num=6;
			temp=l[i];
			res[i]=0;
			while(num<=temp)
			{	sum=0;
				factor=num;
				temp1=num;
				
				while(factor>=1)
				{
				
				if(temp1%factor==0)
					{
					sum=sum+factor;
					}					
				factor--;
				}
				if(sum==2*num)
					{					
					
					res[i]+=num;
					
					}
				num++;

			}

		}
	i++;	
	}
	i=0;
	while(i<T)
		printf("%d\n",res[i++]);
}