#include<iostream>

using namespace std;

int main()
{
	cin.tie(0);
	int N, i;
	int res;
	int sum = 0;
	cin >> N;

	for (i = 1; sum < N; i++)
		sum += i;
	i -= 1;
	res = N - (sum - i) - 1;

	if (i % 2 == 0) cout << 1 + res << "/" << i - res << endl;
	else cout << i - res << "/" << 1 + res << endl;
}