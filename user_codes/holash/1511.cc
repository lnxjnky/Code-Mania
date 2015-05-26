#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,A[100],l[100],p;
    char m[100][52];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {  
           scanf("%s",&m[i]);
           scanf("%d",&A[i]);
        
        }
     for(i=0;i<t;i++)
     {  
         p=1;
         l[i]=strlen(m[i]);
         while(A[i]!=0)
         {
               p=p*l[i];
               l[i]--;
               A[i]--;
                       
         }
        printf("%d\n",p);
       }
     
    
       return 0;
       
    
    }