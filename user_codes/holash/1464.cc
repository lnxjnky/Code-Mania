#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,A[100],l[100],p;
    char m[100][52];
    scanf("%d",t);
    for(i=0;i<t;i++)
    {   for(j=0;j<52;j++)
           scanf("%c",m[i][j]);
        scanf("%d",A[i]);
        l[i]=strlen(m[i]);
        
     }
     for(i=0;i<t;i++)
     {  
         p=1;
         while(A[i]!=0)
         {
               p=p*l[i];
               l[i]--;
               A[i]--;
                       
         }
        printf("&d\n",p);
       }
       return 0;
       
    
    }