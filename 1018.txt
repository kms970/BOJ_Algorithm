#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

string warr[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string barr[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int main()
{
	vector<string> v;
	string t;
	int x, y, bcount, e = 1999999999, wcount;
	cin >> x >> y;

	for (int i = 0; i < x; i++)
	{
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i <= x - 8; i++)
	{
		for (int j = 0; j <= y - 8; j++)
		{
			bcount = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (v[k + i][l + j] != barr[k][l]) bcount++;
				}
			}

			wcount = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (v[k + i][l + j] != warr[k][l]) wcount++;
				}
			}
			if (min(bcount, wcount) < e) e = min(bcount, wcount);
		}
	}
	cout << e << endl;
}