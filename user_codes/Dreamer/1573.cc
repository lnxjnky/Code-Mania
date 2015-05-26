#include<cmath>
#include<cstdio>

bool isPrime(long long N)
{
	if(N<2)
		return false;
	if(N==2)
		return true;
	if(N%2==0)
		return false;
	for(long long i=3; i*i<=N; i+=2)
		if(N%i==0)
			return false;
	return true;
}

int main()
{
	bool flag;
	int count,T;
	long long root,temp,N;
	scanf("%d ",&T);
	while(T--)
	{
		scanf("%lld",&N);
		if(N%4==3 && isPrime(N))
			flag = false;
		else if(N%100)
		{
	        flag = true;
			root = static_cast<long long>(sqrt(N));
			for(long long i=3; i<=root; i+=4)
			{
				if(N%i==0 && isPrime(i))
				{
					temp = N;
					count = 0;
					while(temp%i==0)
					{
						count++;
						temp /= i;
					}
					if(count&1)
					{
						flag = false;
						break;
					}
				}
			}
		}
		else
		{
			flag = false;
			root = static_cast<long long>(sqrt(N));
			for(long long i=0; i<=root; i++)
			{
				temp = N - i*i;
				if(sqrt(temp)-static_cast<long long>(sqrt(temp)) == 0)
				{
					flag = true;
					break;
				}
			}
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
