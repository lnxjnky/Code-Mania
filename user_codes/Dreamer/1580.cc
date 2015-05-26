#include<cstdio>

int main()
{
	bool flag;
	long i,j,k,s[100],size,N,S,K,T;
	long arr[25][25];
	scanf("%ld",&T);
	while(T--)
	{
		bool a[25],b[25];
		for(i=0; i<25; i++)
			a[i] = b[i] = false;
		a[0] = true;
		scanf("%ld%ld%ld",&N,&S,&K);
		for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				scanf("%ld",&arr[i][j]);
			}
		}
		while(K--)
		{
			for(i=0; i<N; i++)
			{
				if(a[i]==true)
				for(j=0; j<N; j++)
				{
					if(arr[i][j])
						b[j] = true;
				}
			}
			for(i=0; i<N; i++)
				a[i] = b[i];
            for(i=0; i<25; i++)
				b[i] = false;
		}
		if(a[S-1])
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
