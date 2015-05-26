#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    { 
        int k,a,i ,flag=1;
        scanf("%d",&k);
        a=sqrt(k);
        for(i=0;i<=a;i++)
        {
           int p=sqrt(k-(i*i));
           if(p*p+i*i==k)
           {
            printf("yes ");
            flag=0;
            break ;
           }
        }
        if(flag)
        printf("no");
    }
            
      return 0;
}
    
