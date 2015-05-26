#include<stdio.h>
long facu(int n)
{  long fac=1;
   int i=1;
   while (i<=n)
    {fac*=i;
     i++;
     }
  return fac;
}      
int main()
{
    char n[52];
    int k,kk,len,t;
    long pos[100];
    scanf("%d",&t);
    for(kk=0;kk<t;kk++)
    {scanf("%s",&n);
     scanf("%d",&k);
     len=strlen(n);
     pos[kk]=facu(len)/facu(len-k);
    } 
    for(kk=0;kk<t;kk++) 
    printf("\n %ld",pos[kk]);
    
}
    