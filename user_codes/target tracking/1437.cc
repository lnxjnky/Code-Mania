#include<stdio.h>
#include<string.h>
//#include<conio.h>
void fact (int a,int b)
{
     int i;
     long int sum1=1;
     for(i=1;i<=b;i++)
     {
                      sum1=sum1*a;
                      a--;
                      if(sum1>1000000007)
                      {
                                         sum1=sum1%1000000007;
                                         }
                                         }
                                         printf("%l",sum1);
                                         }
int main()
{
char word[52];
int t,k,l,i;
unsigned int n=1;
scanf("%d",&t);
while (t)
{
scanf("%s",word);
scanf("%d",&k);
l= strlen(word);
printf("%d\n",l);
for(i=1;i<=k;i++)
     {
                     n=n*l;
                      l--;
                      if(n>1000000007)
                      {
                                         n=n%1000000007;
                                         }
                                         }
                                         printf("%u\n",n);
                                         
t--;
}
//getch();
}
