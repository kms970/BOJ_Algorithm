#include<iostream>
#include<algorithm>

using namespace std;

int arr[1001][3];
int DP[1001][3];

int main()
{
	int N;
	
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}

	for (int i = 1; i <= N; i++)
	{
		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + arr[i][0];
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + arr[i][1];
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + arr[i][2];
	}

	cout << min(min(DP[N][0], DP[N][1]), DP[N][2]) << endl;
}