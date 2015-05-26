#include<stdio.h>

int getperfect(int n);
main(){
       int a,i,j,sum = 0,p;
   
       scanf("%d",&p);
       int arr[p];
       for(i=0;i<p;i++){
                     
                        scanf("%d",&arr[i]);
                        }
      
       for(j=0;j<p;j++){
       for(i=1;i<=arr[j];i++){
                        if(getperfect(i)==1)
                        sum = sum+i;
                        }
                      
       printf("%d\n",sum);
       sum = 0;
       }
       
       }
       
       int getperfect(int n){

int i,sum=0;
for(i=1;i<=n;i++)
           if(n%i==0){
                      sum = sum+i;
                      }
                    
                      if(sum == (2*n))
                      return 1;
                      else
                      return 0;
           }
