#include<stdio.h>
#include<conio.h>
void main()
{
   int j=0,n,x=0,y;
    scanf("%d",&y);
   for(int z=0;z<y;y++)
   {

  			 scanf("%d",&n);
   		for(int i=1;i<=n;i++)
   	  	{
           for(int a=1;a<=i;a++)
           {
     			 if(i%a==0)
      			{
        			 j+=a;
                }
            }
            if(j=2*i)
                	{
                    x+=i;

  			 		   }
         printf("%d",x);
         }

     }

}