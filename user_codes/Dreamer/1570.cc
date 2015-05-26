#include<cstdio>
#include<cstring>
#define MOD 1000000007

int main()
{
	int i,N,R,T;
	char str[65];
	long long res;
	scanf("%d ",&T);
	while(T--)
	{
		res = 1;
		scanf("%s %d ",str,&R);
		N = strlen(str);
		for(i=N-R+1; i<=N; i++)
		{
			res *= i;
			if(res>MOD) res %= MOD;
		}
		printf("%lld\n",res);
	}
	return 0;
}
