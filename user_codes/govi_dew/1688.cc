#include<stdio.h>

int main()
{
char str[100][100],flg;
int t,n,i,j,k;

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
	printf("\nyes");
	else
       printf("\nno");
}
return 0;

}