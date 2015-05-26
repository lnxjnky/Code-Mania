#include<stdio.h>
int fun(char a[]);
int main()
{
int testcases=0,i=0;
char str[100][100];
for(i=0;i<testcases;i++)
scanf("%s",str[i]);
for(i=0;i<testcases;i++)
{
nov=fun(str[i]);
printf("\n%d",nov);
}
return 0;
}
int fun(char a[])
{
int i=0,res=0;
for(i=0;a[i]!='\0';i++)
{
switch(a[i])
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
res=res+1;
break;
}
}
return res;
}



