#include<iostream>
using namespace std;
 int sumfac(int n)
 { int sum=0,i;
  for(i=1;i<=n/2;i++)
  { if(n%i==0)
    sum+=i;
   }
return sum;
}

 int main()
 { int t,n,i,count;
   cin>>t;
   while(t--)
   { cin>>n;
    count=0;
    for(i=6;i<=n;i++)
    if(sumfac(i)==i)
    count+=i;
    cout<<count<<endl;
} 
getchar();
return 0;
}
