#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v1;

void sol(int i, int n, int key)
{
	int start, end, cnt;

	start = 0;
	end = n - 1;
	while (end - start >= 0)
	{
		int r = (start + end) / 2;

		if (key == v1[r])
		{
			printf("1\n");
			return;
		}
		else if (key < v1[r]) end = r - 1;
		else if (key > v1[r]) start = r + 1;

	}
	printf("0\n");
	return;
}

int main()
{
	int a, b, input;

	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &input);
		v1.push_back(input);
	}

	sort(v1.begin(), v1.end());
	scanf("%d", &b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &input);
		sol(i, a, input);
	}
}