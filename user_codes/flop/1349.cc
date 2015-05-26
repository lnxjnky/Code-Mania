#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  int a[100],k=0,sum1=0;
  unsigned int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 while(a[k])
 {
 for(int j=1;j<=a[k];j++)
 {
         int sum=0;
 for(int l=1;l<j;l++)
{
         if(j%l==0)
         sum=sum+l;
} 
if(sum==j)
 sum1=sum1+sum;
 }
 printf("%d\n",sum1);
 sum1=0;
 k++;         
 
   }        
  return 0;
}
