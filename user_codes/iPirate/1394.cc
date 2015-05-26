#include<stdio.h>



int main(){
    int tc;
    scanf("%d",&tc);
    long n[tc];
    for(int i=00;i<tc;i++){
        scanf("%d",&n[i]);
       }
     for(long i=0;i<tc;i++){
         int c =0;
         for(long k=1;k<=n[i];k++){
             long s = 0;
             for(long l=1;l<k;l++){
                 s = (k*k)+ (l*l);
                 if(s==n[i]){
                     c++;
                 }    
                     }
                     
                 }
             if(c!=0){
                 printf("YES\n");
                 }
             else{
                 printf("NO\n");
    
                 }        
             }
           
           return 0;  
         }  