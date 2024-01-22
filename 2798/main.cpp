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
	int N, M;
	cin >> N >> M;
	int arr[100];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int sum;
	int ans = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum >= ans && sum <= M)
					ans = sum;
			}
		}
	}

	cout << ans << endl;
	return 0;
}