#include<iostream>

using namespace std;

int main()
{
	int res = 0, a, b, c;
	int cnt = 1,num;

	cin >> a >> b >> c;
	num = c - b;
	if (num > 0)
	{
		cout << (a/num)+1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}