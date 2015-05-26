#include<stdio.h>

int main()
{
char str[100][100],flg;
int i,j,t;

	scanf("%d",&t);

for(i=1;i<=t;i++)
	scanf("%s",str[i]);



for(j=1;j<=t;j++)
{

	flg=0;
	for(i=0;str[j][i]!='\0';i++)
	{

		if(str[j][i]=='.')
		{
		flg=1;
		break;
		}

	}

	if(flg==0)
	printf("Yes\n");
	else
       printf("No\n");
}
return 0;

}
