#include<cstdio>
#define MAX 100000000l

long arr[10000],min[10000],N;

long getMin(long x)
{
	long i,j;
	min[0] = 0;
	for(i=1; i<=x; i++)
		min[i] = MAX;
	for(i=1; i<=x; i++)
	for(j=0; j<N; j++)
	if((arr[j]<=i) && min[i-arr[j]]+1<min[i])
	min[i] = min[i-arr[j]]+1;
	if(min[x]==MAX)
		return 0;
	else
		return min[x];
}

int main()
{
	long X,T;
	scanf("%ld",&T);
	while(T--)
	{
		scanf("%ld%ld",&N,&X);
		for(int i=0; i<N; i++)
			scanf("%ld",&arr[i]);
		printf("%ld\n",getMin(X));
	}
	return 0;
}
