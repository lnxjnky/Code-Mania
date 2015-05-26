#include<iostream>
#include<stdio.h>


using namespace std;
int main()
{
    int i,T,S,pr,n,j,pj,di,r,a[100],sum,b[100],m,q=0,l;
    cin>>T;
    if(T>=1 && T<=100)
    {
    for(i=1;i<=T;i++)
    {
    cin>>n;
    cin>>S;
    if(n>=1 && n<=100 && S>=1 && S<=1000)
    {
            for(j=0;j<n;j++)
            { 
              cin>>m;
              if(m>=1 && m<=100)
               a[j]=m;   
             }
    pj=S;
    j=n-1;
    sum=0;
    while(pj!=0)
    {
         di=pj/a[j];
         r=pj%a[j];
         sum=sum+di;
         pj=r;
         j--;       
     }
    b[q]=sum;
      q++;
      }
      }
      }
      for(l=0;l<q;l++)
      {
      cout<<b[l];
      cout<<"\n";
      }
    
      return 0;                                      

}

