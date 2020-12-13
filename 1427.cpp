#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<int> v;
	while (num > 0)
	{
		v.push_back(num % 10);
		num /= 10;
	}
	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	cout << endl;
	return 0;
}