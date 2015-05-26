#include<cstdio>

long long arr[8] = {6, 28, 496, 8128, 33550336, 8589869056ll, 137438691328ll, 2305843008139952128ll};

int main()
{
	int i,N,T;
	long long res;
	scanf("%d ",&T);
	while(T--)
	{
		res = 0;
		scanf("%lld ",&N);
		for(i=0; i<7; i++)
		{
			if(arr[i]<=N)
				res += arr[i];
			else
				break;
		}
		printf("%lld\n",res);
	}
	return 0;
}
