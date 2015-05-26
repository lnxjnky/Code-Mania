
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,l, i,j,flag=0;
    long n[100],a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%ld",&n[i]);
    for(i=0;i<t;i++)
    {
                     flag=0;
                     for(j=0;j<=(int)sqrt(n[i]);j++)
                     {
                                        a=j*j;
                                        b=n[i]-a;
                                        if((sqrt(b)-(int)sqrt(b))==0)
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
