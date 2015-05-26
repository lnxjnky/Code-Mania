#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int tc, n, a, i,j, flag[100];
    double b,s;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
                     cin>>n;
                     a=sqrt(n);
                     for(j=a;j>0;j--)
                     {
                                     b=n-(j*j);
                                     b=sqrt(b);
                                     s=b-(int)b;
                                     if(s==0.0)
                                     {
                                               flag[i]=1;
                                               break;
                                     }
                                     else
                                         flag[i]=0;
                     }
    }
    cout<<"\n";
    for(i=0;i<tc;i++)
    {
                     if(flag[i]==1)
                         cout<<"Yes"<<"\n";
                     else
                         cout<<"No"<<"\n";
    }
    return 0;
}