#include<stdio.h>
int factor(int );
int main(){
int i,t,l,out;
scanf("%d",&t);
if(t>1 && t<100){
int a[t],b[t];
for(i=0;i<t;i++){
scanf("%d",&a[i]);
}
for(i=0;i<t;i++)
b[i] = factor(a[i]);
for(i=0;i<t;i++)
printf("%d\n",b[i]);
} return 0;}
int factor(int r){

int sum=0,ii,tt=0,i,c;
for(ii=r;ii>5;ii--){
for(i=1;i<=r;i++){
    c=(ii%i);
    if( c==0)
     sum=sum+i;

}
 if(sum==(2*ii))
     {tt=tt+ii;

      }sum=0;
}

return tt ;

}
