#include<conio.h>
#include<stdio.h>
int main()
{
   int j=0,n,x,y;
   printf("enter the number");
   scanf("%d",&y);
   for(int z=0;z<y;y++)
   {
   		printf("enter the number");
  			 scanf("%d",&n);
   		for(int i=1;i<n+1;i++)
   	  	{
     	 if(n%i==0)
      	{
         j+=i;
      	}
  			 }
   		 if(j=2*n)
   		 {x+=j;
  			  return x;
  			  }

           }
}