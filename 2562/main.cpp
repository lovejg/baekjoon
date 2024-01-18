#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	int a[8];
	for (int i = 0; i < 9; i++)
		cin >> a[i];

	int max = 0;
	int idx = -1;

	for (int i = 0; i < 9; i++)
	{
		if (a[i] > max)
		{
			idx = i;
			max = a[i];
		}
	}
	cout << max << endl;
	cout << idx + 1 << endl;

	return 0;
}