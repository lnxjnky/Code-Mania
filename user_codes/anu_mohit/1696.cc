#include <iostream>
#include <stdio.h>

#include<string.h>
#define size 20

using namespace std;
int main()
{
 int n,i,j,l;
 int f[size];
 char s[size];
 cin>>n;
 for(i=0;i<n;i++)
 {
                 cin>>s;
                 l=strlen(s);
                 for(j=0;j<l;j++)
                 {
                                 f[i]=0;
                                 if(s[j]=='.')
                                 f[i]=1;
                                 }
                                 }
                                 for(i=0;i<n;i++)
                                 {
                                                  if(f[i]==1)
                                                  cout<<"No\n" ;
                                                  else
                                                  cout<<"Yes\n";
                                                  }
                                                  
                                                  return(0);
                                                  }                             
          
                                 
