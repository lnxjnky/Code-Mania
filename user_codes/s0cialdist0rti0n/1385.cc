#include<iostream>

using namespace std;
int perfect(int );



int main(){
  int test,a[100];
  cin>>test;
  for(int i=0;i<test;i++){
          cin>>a[i];
  }
  for(int i=0;i<test;i++){
          cout<<perfect(a[i])<<"\n";
  }
  return 0;
} 

int perfect(int num){
         int sum,i;
         int g=0;
         for(int n=1;n<=num;n++){
                             i=1;
                             sum = 0;
                             while(i<n){
                                        if(n%i==0)
                                        sum=sum+i;
                                        i++;
                                        }
                             if(sum==n)
                                       g=g+n;
         }
         return(g);
}
