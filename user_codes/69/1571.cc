#include<iostream>
int main()
{int t,c;
 int ar[100];
 cout<<"please enter the no. of tests";
 cin>>t;
 cout<<"please enter the nos.";
 for(int i=0;i<t;i++)
 cin>>ar[i];
 for(int m=0;m<t;m++)
 {c=0;
  for(int j=0;j<(ar[m]/2+1);j++)
 {for(int k=ar[m];k>=0;k--)
  {if((j*j)+(k*k)==ar[m])
   c=1;}
   if(c==1)
   break;
   }
 if(c==0)
cout<<"NO\n";
else
cout<<"YES\n";
}return 0;
}
