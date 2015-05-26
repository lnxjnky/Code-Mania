#include<stdio.h>
int main()
{ int s[100],a[100],t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
       scanf("%d",&a[j]);
   for(int tc=0;tc<t;tc++)
   { 
    int i,n,sum=0,x,result=0;
    //printf("enter n\n");
    //scanf("%d",&n);
    n=a[tc];
    for(x=1;x<=n;x++)
    {
    for(i=1;i<=x;i++)
    {
          if(x%i==0)
          sum=sum+i;
    }
    //printf("\nx=%d sum=%d",x,sum);
    if(sum==(2*x))
    result+=x;
    sum=0;
     }
     s[tc]=result;
    
     }
     for(int j=0;j<t;j++)
       printf("%d\n",s[j]);
    
return 0;
}
