#include<iostream>

using namespace std;

int main()
{
	int c, w, h, n, x, y, count = 0,t;
	int arr[50][50] = { 0 };
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		count = 0;
		cin >> w >> h >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> x >> y;
			arr[x][y] = 1;
		}
		for (int a = 0; a < h; a++)
		{
			for (int b = 0; b < w; b++)
			{
				if (arr[a][b] == 1)
				{
					arr[a][b] = 2;
					if (b > 0 && arr[a][b - 1] == 1)
					{
						t = b - 1;
						while (arr[a][t] != 0)
						{
							arr[a][t] = 2;
							t--;
						}
					}
					if (b < w && arr[a][b + 1] == 1)
					{
						t = b + 1;
						while (arr[a][t] != 0)
						{
							arr[a][t] = 2;
							t++;
						}
					}
					if (a > 0 && arr[a - 1][b] == 1)
					{
						t = a - 1;
						while (arr[t][b] != 0)
						{
							arr[t][b] = 2;
							t--;
						}
					}
					if (a < h && arr[a + 1][b] == 1)
					{
						t = a + 1;
						while (arr[t][b] != 0)
						{
							arr[t][b] = 2;
							t++;
						}
					}

					count++;
				}
			}
		}
		cout << count << endl;
	}
}