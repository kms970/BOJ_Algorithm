#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a;
	while (1)
	{
		cin >> a;
		if (a == 0)break;
		else
		{
			string s = to_string(a);
			string t = to_string(a);
			reverse(s.begin(), s.end());
			if (s == t) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
}