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
	Init();
	int T, k, n;
	cin >> T;
	int arr[15][15];

	for (int i = 1; i < 15; i++)
		arr[0][i] = i;

	for (int i = 1; i < 15; i++)
	{
		arr[i][1] = 1;
		for (int j = 2; j < 15; j++)
		{
			arr[i][j] = 0;
			for (int k = 1; k <= j; k++)
				arr[i][j] += arr[i - 1][k];
		}
	}

	for (int i = 0; i < T; i++)
	{
		cin >> k >> n;
		cout << arr[k][n] << endl;
	}
	return 0;
}