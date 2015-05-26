#include<stdio.h>

#include<string.h>

int fact(int);
int main()
{
    int nt;
    int ana;
    int slen[100];
    char str[100][100];
    int let[100];
    printf("enter the no of test cases");
    scanf("%d",&nt);
    for(int i=0;i<nt;i++)
    {                 char temp[100];
                      
                      scanf("%s",&temp);
                      
                    strcpy(&str[i][0],temp);
                      
                      scanf("%d",&let[i]);
                      slen[i]=strlen(temp); 
                    
                      
    }   
                

    for(int i=0;i<nt;i++)
    {       
            ana=fact(slen[i])/(fact(slen[i]-let[i]));
            printf("%d\n",ana);
            
                       
    }
    
  
    return 0;
}
int fact(int a)
{   
    int f=1;
    for(int i=a;i>=1;i--)
    {f=f*i;
    }  
    return f; 
    
}
