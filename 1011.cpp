#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long long int x, y, size;
	long long int sum;

	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> x >> y;
		sum = y - x;
		long long int c = sqrt(sum);

		if (sum == c * c) cout << 2 * c - 1 << endl;
		else if (sum <= c * (c + 1)) cout << 2 * c << endl;
		else cout << 2 * c + 1 << endl;
	}
}