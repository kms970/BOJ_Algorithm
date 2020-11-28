#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int T, init;
	vector<pair<int, int>> v(42);
	cin >> T;
	v[0] = { 1,0 };
	v[1] = { 0,1 };
	for (int i = 0; i < T; i++)
	{
		cin >> init;
		for (int j = 2; j <= init; j++)
		{
			v[j] = { v[j - 1].first + v[j - 2].first,v[j - 1].second + v[j - 2].second };
		}
		cout << v[init].first << " " << v[init].second << endl;
	}
}