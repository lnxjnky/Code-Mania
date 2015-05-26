#include <iostream>
#include <stdio.h>


using namespace std;

int main(){
int a[100],b[100][2],c[100];
    int n,k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<2;j++)
             scanf("%d",&b[i][j]);
              for(k=0;k<b[k][0];k++)
       scanf("%d",&c[k]);
            
            }
      
               
               
               
        int l=0,m=1,p,m1=0,d;
      
      while(m1<n)
      {  
        int sum=0;         
        p=b[l][m];
        for(d=k-1;d>=0;d--)
        {
         sum+=p/c[d];
         p=p%c[d];
         
          }
          if(p==0)
          printf("%d\n",sum);
          else
          printf("%d",sum+1);
          l++;
          m1++; 
          } 
              
  return 0;
  
} 