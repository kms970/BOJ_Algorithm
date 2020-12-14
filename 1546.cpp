#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, max;
	vector<int> v;
	vector<double> t;
	double sum=0;

	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
	}
	max = *max_element(v.begin(), v.end());

	for (int i = 0; i < a; i++)
		sum+=((double)v[i] / max) * 100;

	printf("%.9lf", sum/a);
}