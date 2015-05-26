#include<stdio.h>
#include<math.h>
int main()
{
int T,i=0,j=1,num=0,temp,temp3,temp1;
float temp2;

scanf("%d",&T);

char res[100];
int l[T];

	while(i<T)
	{	
		scanf("%d",&l[i]);	
		temp=l[i];
		temp1=sqrt(temp);
		
		j=1;		
		while(j<temp1)
		{
			num=temp-(j*j);
			temp2=sqrt(num);
			temp3=sqrt(num);
			if(temp2-temp3==0)
			{
				res[i]='y';
				break;
			}
			j++;
			
		}	
		if(j==temp1)
			res[i]='n';
		i++;				
	}
i=0;
while(i<T)
{
if(res[i]=='n')
printf("No\n");
else
printf("Yes\n");
i++;
}	
}	