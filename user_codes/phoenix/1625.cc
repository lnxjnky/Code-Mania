#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{      
    int a=10,b=10,c,g=0,n,i;
    printf("enter the number of guesses\n");
    scanf("%d",&g);
    do{
    //c=a2+b2;
//    c=200;
          for (i=0;i<g;i++)
          {
              scanf("%d",&n);
              if(n==200)
              printf("yes");
              else
              printf("no");
              }
              printf("enter the number of guess");
              scanf("%d",&g);
              }while(1<= g <=100);
                                         
          getch();  
}
