#include<stdio.h>
double facu(int n)
{  double fac=1;
   int i=1;
   while (i<=n)
    {fac*=i;
     i++;
     }
  return fac;
}
int leng( char *d)
{
    int len=0;
    while(*d!='\0')
    {len++;
     d++;
     }
    return (len);
}          
int main()
{
    char n[52];
    int k,kk,len,t;
    double pos[100];
    scanf("%d",&t);
    for(kk=0;kk<t;kk++)
    {scanf("%s",&n);
     scanf("%d",&k);
     len=leng(n);
     if (k==0)
     pos[kk]=0;
     else
     pos[kk]=facu(len)/facu(len-k);
    } 
    for(kk=0;kk<t;kk++) 
    printf("\n%d",(int)pos[kk]);
    
}
    