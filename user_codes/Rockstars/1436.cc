#include <iostream>
#include <stdio.h>
#include<math.h>

using namespace std;

int main()
{
   int n,i,j,a,t[100],p=0,m,T,k,N;
   cin>>T;
   if(T>=1 && T<=100)
   {
           for(k=1;k<=T;k++)
           {
           cin>>N;
   a=0;
   if(N>=1 && N<=pow(10,15))
   {
   for(i=1;i<=N/log(N);i++)
   {
       for(j=1;j<=N/log(N);j++)
       {
         if((i*i)+(j*j)==N)
         {
            t[p]=1;
            p++;
            a=1;
                 break;          
         }
         
                    
       }
     if(a==1)
       break;
     }
     if(a==0)
     {
     t[p]=0;
     p++;
     }
     
    }
            }
   }
   for(m=0;m<p;m++)
   {
                   if(t[m]==1)
                   cout<<"Yes\n";
                   else
                   cout<<"No\n";
                   
                   }
       
       
       return 0;
       }
