#include<stdio.h>
#include<math.h>
#include<string.h>
unsigned long fac(int a)
{
unsigned long f = 1;int i;
for(i=0;i<a;i++)
f*=i;
return f;
}
int main()
{
      int t,i,j,k[100],l;
      char n[100][52];
unsigned long lfact=1,rfact=1,ans,p=1000000000+7;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      scanf("%s%d",&n[i][0],&k[i]);
      for(i=0;i<t;i++)
      {
                      lfact=1;
                      rfact=1;
                     
                      l=strlen(n[i]);
                      lfact=fac(l);
                      rfact=fac(l-k[i])
                      ans=lfact/rfact;
                      if(ans>=65535)
                      ans%=p;
                      
                      printf("%d\n",ans);
      
      }                   
 
     
     return 0;
}
            