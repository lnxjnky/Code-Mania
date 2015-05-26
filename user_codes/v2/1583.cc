
#include<stdio.h>


int main()
{  
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int p=1,k,j,m=0;
        scanf("%d",&k);
        while(p<=k)
        {
           int j=0,i;
           for(i=1;i<=(p/2);i++)
           {
              if(p%i==0)
              {
                j+=i;
              }
           }
           j=j+p;
           if(j==p*2)
           {
             m+=p;
           }
           p++;
        }
        printf("%d \n",m);
        
}

return 0;
}     
             
             
              
           