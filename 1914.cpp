#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int N;

void hanoi(int n, int start, int via, int to)
{
	if (n == 1) printf("%d %d\n", start, to);
	else
	{
		hanoi(n - 1, start, to, via);
		printf("%d %d\n", start, to);
		hanoi(n - 1, via, start, to);
	}
}

int main()
{
	cin >> N;

	string answer = to_string(pow(2, N));
	int idx = answer.find('.');
	answer = answer.substr(0, idx);
	answer[answer.length() - 1] -= 1;
	printf("%s\n", answer.c_str());

	if (N <= 20) hanoi(N, 1, 2, 3);
}