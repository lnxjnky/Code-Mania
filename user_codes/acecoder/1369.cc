#include<iostream>
using namespace std;
#include<string.h>
int fact(int n)
{ int i,fact=1;
 if(n==0)
 return 1;
 for(i=2;i<=n;i++)
  fact=fact*i;
  return fact;
}

int main()
 { int p,t,n,l,i;
 char str[52];
 cin>>t;
 while(t--)
 { cin>>str>>n;
   l=strlen(str);
   p=fact(l)/fact(l-n);
   cout<<p<<endl;
}
return 0;
}
