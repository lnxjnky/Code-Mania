#include<stdio.h>
#include<math.h>
int main()
{
    long t,l, i,j,flag=0,n[100],a,b,d;
    double c;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    scanf("%ld",&n[i]);
    for(i=0;i<t;i++)
    {
                     flag=0;
                     for(j=0;j<sqrt(n[i]);j++)
                     {
                                        a=j*j;
                                        b=n[i]-a;
                                        c=sqrt(b);
                                        d=(long)sqrt(b);
                                        if((c-d)==0)
                                        {
                                                          flag=1;
                                                          break;
                                        }
                     }
                     if(flag==1)
                     printf("Yes\n");
                     else
                     printf("No\n");
     } 
return 0;
}
