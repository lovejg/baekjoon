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
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		int k;
		if (str == "push")
		{
			cin >> k;
			q.push(k);
		}
		else if (str == "pop")
		{
			if (q.empty())
				cout << -1 << endl;
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (str == "front")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (str == "back")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
		else if (str == "size")
			cout << q.size() << endl;
		else if (str == "empty")
			cout << q.empty() << endl;
	}
	return 0;
}