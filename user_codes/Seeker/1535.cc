#include<stdio.h>

int sqr(int a){
    int sq=a*a;
    return sq;
     }
           
int main()
{
      int t, i, n,j,k, s,flg;
      scanf("%d",&t);
      int a[t];
      for(i=0;i<t;i++)
      {
        scanf("%d",&a[i]);           
      }
      for(i=0;i<t;i++)
                      {flg=0;
                       k=1;
                       n=a[i];
                       s = int (n/2);
                       for(j=1;j<=s; j++ ){
                                     for(k=1;k<=j;k++){
                                                  if(sqr(j)+sqr(k)== n){
                                                  printf(" YES \n");
                                                  flg=1;
                                                  k=k+s;
                                                  }
                                                  }
                       }
                       if(flg==0)
                       printf(" NO \n");
                       }
       return 0;
      }
                            
