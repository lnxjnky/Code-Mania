#include<stdio.h>


int fact(int num);
int main(){
    int testcase,i,list[100];
    char namelist[100][70];
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++){
                           scanf("%s %d",namelist[i],&list[i]);  
                             }
   
    for(i=0;i<testcase;i++){
                             int num,len=0,total,j=0;
                            
                            while(namelist[i][j++]!='\0') len++;
                             
                             total=fact(len)/fact(len-list[i]);
                             printf("%d\n",total);
                             }
                              
 
    return 0;

}

int fact(int num){
int i,fact=1;
for(i=num;i>=1;i--) fact=fact*i;
return fact;
}
