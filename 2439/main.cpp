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
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < N - i; j++)
			cout << ' ';
		for (int j = 0; j < i; j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}