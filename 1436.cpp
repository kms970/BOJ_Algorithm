#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int count = 0;
	int title = 666;
	string s;

	cin >> n;

	while (true) {
		s = to_string(title);

		if (s.find("666") != -1) {
			count++;
		}

		if (count == n) {
			cout << title << endl;
			break;
		}
		title++;
	}

	return 0;
}