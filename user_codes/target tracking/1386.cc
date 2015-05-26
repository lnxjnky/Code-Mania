#include<stdio.h>
//#include<conio.h>
int perfect(int a)
{
    int i,sum=0;
    for(i=1;i<=a;i++)
    {
              // printf("%d",a);      
                     if(a%i==0)
                     {
                              // printf("%d ",i);
                               sum=sum+i;
                              // printf("%d ",sum);
                               }
                               }
                               if(sum==(a*2))
                               {
                                         return a;
                                         }
                                         else 
                                         {
                                              return 0;
                                              
                                              }
                                              }
int main()
{
     int t,i,l,sum;
    
    
    
    scanf("%d",&t);
    while(t)
    {
            sum=0;
            scanf("%d",&l);
            for(i=1;i<=l;i++)
            {
                             sum=sum+perfect(i);
                             
                             }
                             printf("%d\n",sum);
    t--;
    }
  //  getch();
    return 0;
}
