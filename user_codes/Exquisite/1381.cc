#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
      int t,i,j,ans,k[100],l,p=pow(10,9)+7;;
      char n[100][52];
double lfact=1,rfact=1,kfact=1;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      scanf("%s%d",&n[i][0],&k[i]);
      for(i=0;i<t;i++)
      {
                      lfact=1;
                      rfact=1;
                      kfact=1;
                      l=strlen(n[i]);
                      for(j=l;j>1;j--)
                      lfact*=j;
                      for(j=l-k[i];j>1;j--)
                      rfact*=j;
                      ans=lfact/rfact;
                      if(ans>=65535)
                      ans%=p;
                      
                      printf("%d\n",ans);
      
      }                   
 
    
     return 0;
}
            