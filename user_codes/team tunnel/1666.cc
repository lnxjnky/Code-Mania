#include<stdio.h>
#include<math.h>

int main(){
    int t;
   long int s;
    scanf("%d",&t);
    long int a[100];
    for(int j=0;j<t;j++)
       scanf("%d",&a[j]);
   for(int tc=0;tc<t;tc++)
   { 
   long int n=a[tc];int i;
                  for(i=1;(i*i)<=(n/2+1);i++)
                         { 
                                     s=n-(i*i);
                                        long int k=sqrt(s);
                                             if( ((sqrt(s))-k)<.000001)
                                                  {
                                                  printf("Yes\n");            
                                                  break;   
                                                  }
                                                  
                                       
                            }          
                            if((i*i)>(n/2+1))
                            printf("No\n");
    }          
return 0;
}
