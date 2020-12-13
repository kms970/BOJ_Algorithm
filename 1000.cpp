#include<iostream>

using namespace std;

int main()
{
	int a, b;
	double sum;
	cin >> a >> b;

	sum = (double)a / (double)b;
	printf("%.12lf", sum);
}