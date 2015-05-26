#include<stdio.h>
int check(int num)
{
    register int i=1,j=1,max,c=0,l;
    for (l=1;l<num;l++)
        {
         if(num%l==0)
         max=l;
        }
    for(i=1;i<=max;i++)
     {for (j=1;j<=max;j++)
       if((unsigned long)num==(unsigned long)(i*i+j*j))
       {printf("\nYes"); 
       return 1;}
     } 
   printf("\nNo"); 
   return 0;
}   
int main()
{
    int i,t,n[100]; 
    scanf("%d",&t);
    for(i=0;i<t;i++)
      scanf("%d",&n[i]);
      
      for(i=0;i<t;i++)
      check(n[i]);
      
}   