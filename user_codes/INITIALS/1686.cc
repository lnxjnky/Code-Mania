#include<stdio.h>
int fun(char a[]);
int main()
{
int testcases=0,i=0,g=0;
char str[100][100];
clrscr();
scanf("%d",&testcases);
for(i=0;i<testcases;i++)
scanf("%s",str[i]);
for(i=0;i<testcases;i++)
{
g=fun(str[i]);
if(g==1)
printf("\nYes");
else
printf("\nNo");
}
getch();
return 0;
}
int fun(char a[])
{
int i=0,flag=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
flag=1;
break;
}
}
if(flag==0)
return 1;
else
return 0;
}



