#include<iostream>
#include<math.h>

using namespace std;
void check1(int );


int main(){
  int test,a[100];
  cin>>test;
  for(int i=0;i<test;i++){
          cin>>a[i];
  }
  for(int i=0;i<test;i++){
          check1(a[i]);
          cout<<"\n";
  }
  return 0;
} 

void check1(int num){
         int flag=0,sq,t=0,sq1,i,j;
         sq1=sqrt(num);
         for(int i=1;i<=sq1;i++){
                 for(int j=sq1;j>=1;j--){
                         t=i*i+j*j;
                         if(t == num){
                                          cout<<"Yes";
                                          flag=1;
                                          goto a;
                         }
                         cout<<"ff";
                        
                 }
                 
         }
     a:    if(flag==0)
         cout<<"No";
        
        
}