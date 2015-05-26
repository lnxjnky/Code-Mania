#include<stdio.h>


int fact(int num);
int main(){
    int testcase,i;
    scanf("%d",&testcase);
   if(testcase>=1&&testcase<=100){
    for(i=1;i<=testcase;i++){
                             char name[60];int num,len=0,total,j=0;
                             scanf("%s %d",name,&num);
                            while(name[j++]!='\0') len++;
                             
                             total=fact(len)/fact(len-num);
                             printf("%d\n",total);
                             }
                              }
   
    return 0;

}

int fact(int num){
int i,fact=1;
for(i=num;i>=1;i--) fact=fact*i;
return fact;
}
