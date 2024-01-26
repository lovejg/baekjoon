#include <iostream>
#define endl '\n'
using namespace std;

char arr[51][51];

void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int cal(int m, int n)
{
	int black = 0;
	int white = 0;

	bool bw = false;
	if (arr[m][n] == 'B') // 좌상단이 black이면
		bw = true;

	for (int i = m; i < m + 8; i++)
	{
		for (int j = n; j < n + 8; j++)
		{
			if (bw)
			{
				if (((i + j) % 2 == 0 && arr[i][j] == 'W') || ((i + j) % 2 == 1 && arr[i][j] == 'B'))
					black++;
				else if (((i + j) % 2 == 0 && arr[i][j] == 'B') || ((i + j) % 2 == 1 && arr[i][j] == 'W'))
					white++;
			}
			else
			{
				if (((i + j) % 2 == 0 && arr[i][j] == 'B') || ((i + j) % 2 == 1 && arr[i][j] == 'W'))
					black++;
				else if (((i + j) % 2 == 0 && arr[i][j] == 'W') || ((i + j) % 2 == 1 && arr[i][j] == 'B'))
					white++;
			}
		}
	}

	return min(black, white);
}

int main()
{
	Init();
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	int min = 2500; // 50 x 50
	for (int i = 0; i < m - 7; i++)
	{
		for (int j = 0; j < n - 7; j++)
		{
			int cost = cal(i, j);
			if (cost < min)
				min = cost;
		}
	}

	cout << min << endl;
	return 0;
}