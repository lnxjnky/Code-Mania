#include<stdio.h>
#include<conio.h>
#include<string.h>



int main()
{
 int nt,x,flag=0;
 int no[100];
 printf("enter the no of test cases");
    scanf("%d",&nt);
    printf("enter the nos");
    for(int i=0;i<nt;i++)
    { 
            
            scanf("%d",&no[i]);
            
    }
    for(int i=0;i<nt;i++)
    {flag=0;
          for(int j=1;j<no[i];j++) 
          {
           for(int k=1;k<no[i];k++) 
           {
            x=(j*j)+(k*k);
            if(x==no[i])
            
                       flag=1;
                   
           }
          } 
          if(flag==1)
           printf("Yes");
           else
            printf("no");
    }
    getch();
    return 0;    
}
