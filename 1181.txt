#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	int size;
	string a;
	vector<pair<int, string>> v;

	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> a;
		v.push_back(make_pair(a.size(), a));
		cin.clear();
	}
	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()),v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].second << endl;
	}
}