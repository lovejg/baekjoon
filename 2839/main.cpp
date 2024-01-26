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
	int n;
	cin >> n;

	int min = 5000; // 대충 큰 값(봉지가 아무리 많아도 이건 못넘음)

	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1666; j++)
		{
			if (((5 * i) + (3 * j) == n) && ((i + j) < min))
				min = i + j;
		}
	}
	if (min == 5000)
		cout << -1 << endl;
	else
		cout << min << endl;
	return 0;
}