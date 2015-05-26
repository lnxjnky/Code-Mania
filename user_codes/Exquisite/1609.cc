#include<stdio.h>
void fun(int,int,int a[100]);
int nc[100];
int main()
{
    int t,coin,den[100][100],n[100],s[100],i,j;;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
    scanf("%d%d",&n[i],&s[i]);
    for(j=0;j<n[i];j++)
    scanf("%d",&den[i][j]);
    }
    for(i=0;i<t;i++)
    {
     for(i=0;i<100;i++)
     nc[i]=0;
    fun(s[i],n[i],den[i]);
    for(j=0;j<n[i];j++)
    coin+=nc[j];
    printf("%d\n",coin);

    }
   return 0;
}
void fun(int s,int n,int a[100])
{
     int r,i,sum=0;
        r=s%a[n-1];
        nc[n-1]=s/a[n-1];
        for(i=0;i<n;i++)
         sum+=nc[i]*a[i];
         if(sum==s)
         return;
        if(sum!=s&&(n-2!=0))
         fun(r,n-1,a);
        else 
        {
         n++;
        do
        {
        if(nc[n-1]==0)
        {
         n++;
         }}while(nc[n-1]!=0);
         nc[n-1]--;
        for(i=0;i<n;i++)
         sum+=nc[i]*a[i];
         fun(s-sum,n-1,a);
         }
}           