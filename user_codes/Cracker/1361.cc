#include<stdio.h>
int find_perfect(int num);
int main()
{int testcase,i;
    scanf("%d",&testcase);
    if(testcase<=100 && testcase>=1){
    for(i=1;i<=testcase;i++){
                             int num,sum=0,j;
                             scanf("%d",&num);
                             if(num<=10000 && num>=1){
                             for(j=1;j<=num;j++){
                                                 sum=sum+find_perfect(j);
                                                 
                                                 }
                             
                                                 printf("%d\n",sum);
                             }}}
   
    return 0;
    }
    int find_perfect(int num){int total=0;
    
                            int j;
                            for(j=1;j<=num;j++){
                                              if(num%j==0) total=total+j;
                                              }
                                              if(total==2*num) return num;
                                              else return 0;          
        
                            }
        
    
    
