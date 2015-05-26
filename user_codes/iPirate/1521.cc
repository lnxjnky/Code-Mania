#include<stdio.h>


int main(){
    int tc;
    scanf("%d",&tc);
    int ul[tc];
    
    for(int i=0;i<tc;i++){
        scanf("%d",&ul[i]);
        }
    for(int i=0;i<tc;i++){
         int r = 0;
         for(int j=1;j<=ul[i];j++){
            int sum = 0;
            for(int k=1;k<=j;k++){
                 if(j%k==0){
                    sum=sum+k;
                    }    
                }
             if(sum==(2*j)){
                 r=r+j;
                 }   
            }
        
        printf("%d\n",r);
        }
  
    return 0;
    }