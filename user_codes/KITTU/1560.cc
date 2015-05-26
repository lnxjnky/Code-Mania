#include<stdio.h>
int t[100],m[10000];
int k=0;
void abc()
{
	int i,x,sum;
	for(i=1;i<=100;i++)
	{	sum=0;
		for(x=1;x<=i;x++)
		{
			if(i%x==0)
			sum=sum+x;
		}
		if(sum==2*i)
		m[i]=1;
		else
		m[i]=0;
    }
}

void task(int y)
{
	int i,sum;
	sum=0;
	for(i=1;i<=y;i++)
	{
		if(m[i]==1)
		sum=sum+i;
	}
		printf("%d\n",sum);
}

int main()
{
int i,T;
abc();
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d",&t[i]);
}

for(i=1;i<=T;i++)
{
	task(t[i]);
}
getch();
	return 0;
}
