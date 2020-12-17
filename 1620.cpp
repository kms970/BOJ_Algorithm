#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	string input;

	unordered_map<string, int> ums;
	unordered_map<int, string> umi;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		ums.insert({ input, i });
		umi.insert({ i,input });
	}

	for (int i = 0; i < M; i++)
	{
		cin >> input;

		if (isdigit(input[0]) != 0) {
			cout << umi.find(stoi(input) - 1)->second << "\n";
		}
		else {
			cout << (ums.find(input)->second) + 1 << "\n";
		}
	}
}