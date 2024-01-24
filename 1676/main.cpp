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

	int t = 0;
	int f = 0;
	for (int i = 1; i <= n; i++)
	{
		int k = i;
		while (1)
		{
			if (k % 2 == 0)
			{
				t++;
				k /= 2;
			}
			else
				break;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		int k = i;
		while (1)
		{
			if (k % 5 == 0)
			{
				f++;
				k /= 5;
			}
			else
				break;
		}
	}

	if (t > f)
		cout << f << endl;
	else
		cout << t << endl;
	return 0;
}