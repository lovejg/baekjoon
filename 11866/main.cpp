#include <iostream>
#include <queue>
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
	int n, k;
	cin >> n >> k;
	queue<int> q;

	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << '<';
	while (q.size() != 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			int t = q.front();
			q.pop();
			q.push(t);
		}
		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << '>' << endl;
	return 0;
}