#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,l, i,j,flag=0;
    long n[100],c,d;
    double a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%ld",&n[i]);
    for(i=0;i<t;i++)
    {
                     flag=0;
                     for(j=0;j<=n[i]/2;j++)
                     {
                                        a=n[i]-j;
                                        b=j;
                                        c=(long)(sqrt(a));
                                        d=(long)(sqrt(b));
                                        if(((c*c)+(d*d))==n[i])
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
