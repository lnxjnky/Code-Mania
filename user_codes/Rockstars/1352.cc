#include <iostream>
#include <stdio.h>


using namespace std;

int main(){
    int sum=0,T,L,i,j,k,a[100],p=0,m,sum1;
    cin>>T;
    if(T>=1 && T<=100)
    {
    for(j=1;j<=T;j++)
    {
                      cin>>L;
                      if(L>=1 && L<=10000)
                      {
                              sum1=0;
   for(k=2;k<=L;k++)
   {
    sum=1+k;
    
    for(i=2;i<=k/2;i++)
    {
                       if(!(k%i))
                       {
                                 sum=sum+i;
                       }
      }
                                 if(sum==(2*k))
                                 {
                                               sum1=sum1+k;
                                               
                                 }
                                 
     }
     a[p]=sum1;
      p++;
     }
     }
     }
     for(m=0;m<p;m++)
     {
                     cout<<a[m];
                     }                          
                                 
     
                                 
  return 0;
} 
