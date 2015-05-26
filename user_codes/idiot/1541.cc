#include<stdio.h>
int chk(long int );
int main(){
int t,i,a,b;
long int d[100];
scanf("%d",&t);
if(t>0 && t<100){
for(i=0;i<t;i++)
{scanf("%d",&d[i]);

}
for(i=0;i<t;i++)
{
 a =chk(d[i]);
} }
return 0 ;
}
int chk(long int d){
int c,b,i,t=0,j,ii=0;
long int arr[100000];
for(i=1;i<d;i++){

c=i*i;
if(c<=d){
 arr[t]=c;
 t++;
}
else
break;
}
for(i=0;i<t;i++)
for(j=0;j<t;j++)
{ b=arr[i]+arr[j];
    if(b==d&& i!=j)
     {   printf("yes\n");
         ii++;
         return 0;}
}

if(ii==0)
{ printf("no\n"); return 1 ;}
}
