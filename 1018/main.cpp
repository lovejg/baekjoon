#include <iostream>
#define endl '\n'
using namespace std;

int n, m;
char arr[51][51];

void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int cal(int r, int c)
{
	int black = 0; // 행+열이 짝수인곳을 전부 black으로
	int white = 0; // 행+열이 짝수인곳을 전부 white로

	for (int i = r; i < r + 8; i++)
	{
		for (int j = c; j < c + 8; j++)
		{
			if ((i + j) % 2 == 0 && arr[i][j] == 'W' || (i + j) % 2 == 1 && arr[i][j] == 'B')
				black++;
			else if ((i + j) % 2 == 0 && arr[i][j] == 'B' || (i + j) % 2 == 1 && arr[i][j] == 'W')
				white++;
		}
	}

	return min(black, white);
}

int main()
{
	Init();
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	int min = 1000000; // 50 x 50이 최대니까 그거보다 큰 값으로
	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			int cost = cal(i, j);
			if (cost < min)
				min = cost;
		}
	}

	cout << min << endl;
	return 0;
}