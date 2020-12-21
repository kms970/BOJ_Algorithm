#pragma warning(disable:4996)

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int c = 0;

string sol(string s)
{
	long long sum = 0;

	for (int i = 0; i < s.size(); i++)
		sum = sum + (s[i] - '0');

	return to_string(sum);
}

int main()
{
	string input;
	long long a;
	cin >> input;
	while (input.size() != 1)
	{
		input = sol(input);
		c++;
	}

	if (input == "3"|| input == "6"|| input == "9") printf("%d\n%s", c, "YES");
	else  printf("%d\n%s", c, "NO");
}