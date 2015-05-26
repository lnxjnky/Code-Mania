#include<stdio.h>
#include<math.h>

int main(){
    int testcase,i;
    scanf("%d",&testcase);
    if(testcase<=100 && testcase>=1){
    for(i=1;i<=testcase;i++){
                             int num,j,k,root;
                             scanf("%d",&num);
                             if(num<=10000 && num>=1){
                             root=sqrt(num)+1;
                             for(j=1;j<=root;j++){
                                for(k=1;k<=root;k++)
                                
                                   {
                                       
                                                  
                                      if((k*k)+(j*j)==num){ printf("Yes\n"); 
                                                             break;} }            
                                                   }
                                                    if((k*k)+(j*j)==num) break;}
                                                    if((k*k)+(j*j)!=num) printf("No\n");
                                                  
                                                   
                             
                             }
                             }
                             
                             return 0;
    }
