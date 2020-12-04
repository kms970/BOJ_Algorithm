#include<iostream>
#include<cstring>
#include<string>

using namespace std;

char *arr=new char[1000001];
string str[1000001];

int main()
{
	string a;
	int cnt = 0;

	getline(cin, a);
	strcpy(arr, a.c_str());

	char* tok = strtok(arr, " ");
	while (tok != nullptr)
	{
		str[cnt++] = string(tok);
		tok = strtok(nullptr, " ");
	}
	cout << cnt << endl;
	return 0;
}