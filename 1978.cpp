#include<iostream>

using namespace std;

bool arr[1002] = { false, };

bool eratos()
{
	arr[0] = true;
	arr[1] = true;
	for (int i = 2; i <= 1001; i++)
	{
		for (int j = 2*i; j <= 1001; j+=i)
		{
			arr[j] = true;
		}
	}
	return arr;
}

int main()
{
	int N;
	eratos();
	cin >> N;
	int a, cnt = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (arr[a]==false) cnt++;
	}

	cout << cnt << endl;
	return 0;
}