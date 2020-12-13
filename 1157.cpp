#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a;
	int arr[26] = { 0 };
	int many = 0,index;
	bool check = false;

	cin >> a;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (a[i] == j + 65) arr[j]++;
		}
	}
	many = *max_element(arr, arr + 26);
	for (int i = 0; i < 26; i++)
	{
		if (many == arr[i] && check == false)
		{
			index = i;
			check = true;
		}
		else if (many == arr[i] && check == true)
		{
			cout << "?" << endl;
			return 0;
		}
	}
	cout << (char)(index + 65) << endl;
}