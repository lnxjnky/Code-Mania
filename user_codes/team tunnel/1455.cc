#include<stdio.h>
#include<math.h>

int main(){
    int s,a[100],t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
       scanf("%d",&a[j]);
   for(int tc=0;tc<t;tc++)
   { 
   int n=a[tc];
                  for(int i=1;(i*i)<(n/2+1);i++)
                         { 
                                     s=n-(i*i);
                                      int k=sqrt(s);
                                             if( (sqrt(s))-k==0)
                                                  {printf("yes\n");
                                                           goto label;                 
                                                               }
                                
                            } (printf("no\n"));label:;          
}           
    
return 0;
}
