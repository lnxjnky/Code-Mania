#include<stdio.h>
#include<stdlib.h>

int find(int);

int main()
{
    int ip[100],op[100];
    int n,sumf;
    int i,k,sum;
    
    scanf("%d",&n);
    
    if(n<1||n>100)
    exit(0);
    
    
    
        i=0;
    while(i<n)
    {
        scanf("%d",&ip[i]);
        if(ip[i]<1||ip[i]>10000)
        {
            
            n--;
        continue;
        
        
        }    
        k=1;
        sum=0;
        while(k<=ip[i])
        {
            sumf=find(k);
            if(sumf==2*k)
            sum+=k;
            k++;
        } 
        op[i]=sum;   
        i++;
    }    
    
    for(i=0;i<n;i++)
    printf("%d\n",op[i]);
    
    
    
    
    return 0;
}

int find(int a)
{
    int sum=0,i,k;
    
        for(i=1;i<=a/2;i++)
        {
            if(a%i==0)
            sum+=i;
        }
        
                return (sum+a);
}            
    
    