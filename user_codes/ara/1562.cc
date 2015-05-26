#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    if( 1<=n<=pow(10,15))
    {
    while(n--)
    { 
        int k,a,i ,flag=1;
        scanf("%d",&k);
        a=(int)sqrt(k);
        for(i=1;i<=a;i++)
        {
           int p=(int)sqrt(k-(i*i));
           if(p*p+i*i==k)
           {
            printf("Yes \n");
            flag=0;
            break ;
           }
        }
        if(flag)
        printf("No \n");
    }
 }
            
      return 0;
}
    
