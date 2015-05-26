#include<stdio.h>
#include<string.h>  
long fac(int n)
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
    char n[52],m[52];
    int i,j,k,kk,len=0,e=0,check=0,count=0,t;
    long pos[100];
    scanf("%d",&t);
    for(kk=0;kk<t;kk++)
    {
     scanf("%s",&n);
     scanf("%d",&k);
     len=strlen(n);
     
     for (i=0;i<len;i++)
     {for (j=i+1;j<len;j++)
       { if(i!=j)
          { 
            if(n[i]==n[j])
             check=1;
             }              
       }
       if(check==0)
       count++;
       check=0;
     }  
     pos[kk]=fac(count)/fac(count-k);
     count=0;
     }
    for(kk=0;kk<t;kk++) 
    printf("\n %ld",pos[kk]);
    
}    