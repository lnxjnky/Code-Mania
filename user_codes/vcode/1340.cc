#include <iostream>

using namespace std;

int factors(int j);

int main()
{
    int tc, i, limit, factor,sum[100],j;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        cin>>limit;
        sum[i]=0;
        for(j=1;j<=limit;j++)
        {
            factor=factors(j);
            if(factor==(2*j))
                sum[i]+=j;
        }
    }
    cout<<"\n";
    for(i=0;i<tc;i++)
        cout<<sum[i]<<"\n";
    return 0;
}

int factors(int j)
{
    int k, sum=0;
    for(k=1;k<=j;k++)
    {
        if((j%k)==0)
        {
            sum+=k;
        }
    }
    return sum;
}
 