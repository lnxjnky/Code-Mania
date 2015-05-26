#include<stdio.h>
#include<string.h>
int fun(char[]);
int main()
{
char str[100][100];
int testcases=0,i=0,res=0;
scanf("%d",&testcases);
for(i=0;i<testcases;i++)
scanf("%s",str[i]);
for(i=0;i<testcases;i++)
{
res=fun(str[i]);
printf("\n%c",res);
}
return 0;
}
int fun(char a[])
{
int i=0,res=0,len=0;
len=strlen(a);
for(i=0;a[i]!='\0';i++)
{
res=res+a[i];
}
res=res/len;
return res;
}

