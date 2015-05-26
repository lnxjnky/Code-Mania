#include<iostream>

using namespace std;

int main()
{
    int tc, n, price, dno[100],i,j,k,output[100],ent;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
                     int dyn[100][1000];
                     dyn[0][0]=0;
                     cin>>n>>price;
                     for(j=0;j<n;j++)
                     {
                                     cin>>dno[j];
                     }
                     for(j=n-1;j>=0;j--)
                     {
                                        k=0;
                                        while(k<j)
                                        {
                                                  if(dno[k]>dno[k+1])
                                                  {
                                                                    ent=dno[k];
                                                                    dno[k]=dno[k+1];
                                                                    dno[k+1]=ent;
                                                  }
                                                  k++;
                                        }
                     }                                                                       
                     for(j=0;j<n;j++)
                     {
                                     for(k=1;k<=price;k++)
                                     {
                                                          if(j==0)
                                                                      dyn[j][k]=(k/dno[j]);
                                                          else if(k<dno[j])
                                                                      dyn[j][k]=dyn[j-1][k];
                                                          else
                                                          {
                                                              ent=(1+dyn[j][k-dno[j]]);
                                                              if(ent<dyn[j-1][k])                                                               
                                                                      dyn[j][k]=(1+dyn[j][k-dno[j]]);
                                                              else
                                                                      dyn[j][k]=dyn[j-1][k];
                                                          }
                                     }
                     }       
                     output[i]=dyn[n-1][price];
    }
    cout<<"\n";
    for(i=0;i<tc;i++)
                     cout<<output[i]<<"\n";
    
    return 0;
}
                                                        
