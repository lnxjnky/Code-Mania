#include <iostream>
#include <stdio.h>


using namespace std;

int main(){
    int sum=0,T,L,i,j,k,a[10000],p=0,m;
    cin>>T;
    if(T>=1 && T<=100)
    {
    for(j=1;j<=T;j++)
    {
                      cin>>L;
                      if(L>=1 && L<=10000)
                      {
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
                                               a[p]=k;
                                               p++;
                                               }
                                               }
                                               }
                                               }
                                               }
                                               for(m=0;m<p;m++)
                                               {cout<<a[m];}
                                 
  return 0;
} 
