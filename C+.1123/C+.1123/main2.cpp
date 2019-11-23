#include <iostream>
#include <vector>
using namespace std;

int n;
vector <int>x;
int count(int pos, int add, long long  mul)
{
	int num = 0;
	for (int i = pos; i < n; ++i)
	{
		add += x[i];
		mul *= x[i];

		if (add > mul)
			num += 1 + count(i + 1, add, mul);
		else if (x[i] == 1)
			num += count(i + 1, add, mul);
		else
			break;

		add -= x[i];
		mul /= x[i];

		while (x[i + 1] == x[i] && i + 1 < n)
		{
			++i;
		}
	}

	return num;
}


int main1()
{
	cin >> n;
	vector <int>x;
	int add = 0;            //ºÍ
	long long mul = 1;      //»ý

	for (int i = 0; i<n; ++i)
	{
		cin >> x[i];
	}


	int num = count(0, add, mul);
	cout << num;

	return 0;
}