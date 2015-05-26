#include<stdio.h>
#include<string.h>
#include<math.h>
void fact(int,int,long,int);
int main()
{
    int t,k,len,flag;
    long long a;
    char w[1000];
    scanf("%d",&t);
    while(t--)
    {
        a=1;
        flag=0;
        scanf("%s",w);
        len=strlen(w);
        scanf("%d",&k);
        fact(len,len-k,a,flag);  
        }
    }
   void fact(int len,int k,long a,int flag)
   {
       if(len==k)
       {
           if(flag)
              printf("%lld",a+7);
           else
           printf("%lld",a);
              return;
          }    
       else
       {
           a=a*len;
           if(a>1000000000)
           {
                          
                      a=a%100000000;
                      flag=1;
           }    
           fact(len-1,k,a,flag);
           }
       }