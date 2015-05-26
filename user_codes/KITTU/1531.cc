#include<stdio.h>
using namespace std;

int main()
{
int i,T,t[100];
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d",&t[i]);
}

for(i=1;i<=T;i++)
{
	if(t[i]>=28)
    	printf("34\n");
    else if(t[i]<6)
    	printf("0\n");
    else
    	printf("6\n");
}
	return 0;
}
