#include<stdio.h>
int main()
{
 int k,p,i,s1,k1,s,n,T;
 scanf("%d",&T);
 while(T--)
 {
  scanf("%d",&p);
  s1=0;
  for(k1=1;k1<=p;k1++)
  {
   k=1;
   n=k1;
   s=0;
   while((k*k)<=n)
    k++;
   for(i=1;i<k;i++)
   {
    if(n%i==0)
    {
     s=s+i;
     s=s+(n/i);
    }
   }
   if(s==(2*n))
    s1=s1+n;
  }
  printf("%d\n",(s1-1));
 }
 return 0;
}
