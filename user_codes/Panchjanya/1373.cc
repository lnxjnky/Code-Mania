#include<stdio.h>
#include<string.h>
#include<math.h>
void fact(int,int,long);
int main()
{
    int t,k,len;
    long a;
    char w[1000];
    scanf("%d",&t);
    while(t--)
    {
        a=1;
        scanf("%s",w);
        len=strlen(w);
        scanf("%d",&k);
        fact(len,len-k,a);  
        }
    
    }
   void fact(int len,int k,long a)
   {
              if(len==k)
       {
              printf("%ld",a);
              return;
          }    
       else
       {
           a=a*len;
           if(a>(pow(10,9)+7))
           a=a%(long(pow(10,9))+7);
           fact(len-1,k,a);
           }
       }