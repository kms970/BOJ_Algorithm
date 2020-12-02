#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int x, y, w, h,sum[4];
	cin >> x >> y >> w >> h;
	sum[0] = x;
	sum[1] = w - x;
	sum[2] = y;
	sum[3] = h - y;
	sort(sum, sum + 4);
	cout << sum[0] << endl;
}