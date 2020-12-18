#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	long long a, b, input, start, end, ans = 0, sum = 0, t;
	vector<long long> v;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	start = 1;
	end = v[a - 1];

	while (start <= end)
	{
		sum = 0;
		t = (start + end) / 2;
		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i] / t;
		}

		if (sum >= b)start = t + 1;
		else if (sum < b)end = t - 1;
	}
	printf("%lld", end);
}