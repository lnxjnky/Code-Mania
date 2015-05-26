#include<stdio.h>
int main()
{
 int n1,n,s,s1,i,a[101];
 int T;
 scanf("%d",&T);
 while(T--)
 {
  s1=0;
  scanf("%d %d",&n,&s);
  for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
  for(i=n;i>=1;i--)
  {
   n1=s/a[i];
   s1=s1+n1;
   s=s%a[i];
   if(s==0)
    break;
  }
  printf("%d\n",s1);
 }
 return 0;
}
