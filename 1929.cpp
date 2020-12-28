#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

bool arr[1000002] = { false, };

bool eratos(int N,int M)
{
	arr[0] = true;
	arr[1] = true;
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (arr[i] == false)
		{
			for (int j = 2; j <= N; j++)
			{
				if (i * j <= N)
				{
					arr[i * j] = true;
				}
				else if (i * j > N) break;
			}
		}
	}
	return arr;
}

int main()
{
	int N, M;

	scanf("%d %d", &M, &N);
	eratos(N,M);
	for (int i = M; i <= N; i++)
	{
		if (arr[i] == false) printf("%d\n", i);
	}

	return 0;
}