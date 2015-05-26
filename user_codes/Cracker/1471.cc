#include<stdio.h>

#include<string.h>
int fact(int num);
int main(){
    int testcase,i;
    scanf("%d",&testcase);
   
    for(i=1;i<=testcase;i++){
                             char name[60];int num,len,total;
                             scanf("%s %d",name,&num);
                             len=strlen(name);
                             
                             total=fact(len)/fact(len-num);
                             printf("%d\n",total);
                             }
    
 
    return 0;

}

int fact(int num){
int i,fact=1;
for(i=num;i>=1;i--) fact=fact*i;
return fact;
}
