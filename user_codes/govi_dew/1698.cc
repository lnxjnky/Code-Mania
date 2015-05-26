#include<stdio.h>

int main()
{
char str[100][100];
int t,i,j,count;


	scanf("%d",&t);
for(j=1;j<=t;j++)
	scanf("%s",str[j]);

for(j=1;j<=t;j++)
{

	count=0;
	for(i=0;str[j][i]!='\0';i++)
	{

		if(str[j][i]=='a'||str[j][i]=='i'||str[j][i]=='o'||str[j][i]=='u'||str[j][i]=='e')
		{
		count++;

		}

	}

	printf("%d\n",count);
}

return 0;

}