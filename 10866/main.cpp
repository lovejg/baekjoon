#include <iostream>
#include <deque>
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
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		string s;
		int k;
		cin >> s;
		if (s == "push_front")
		{
			cin >> k;
			dq.push_front(k);
		}
		else if (s == "push_back")
		{
			cin >> k;
			dq.push_back(k);
		}
		else if (s == "pop_front")
		{
			if (dq.empty())
				cout << -1 << endl;
			else
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (s == "pop_back")
		{
			if (dq.empty())
				cout << -1 << endl;
			else
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (s == "size")
			cout << dq.size() << endl;
		else if (s == "empty")
			cout << dq.empty() << endl;
		else if (s == "front")
		{
			if (dq.empty())
				cout << -1 << endl;
			else
				cout << dq.front() << endl;
		}
		else if (s == "back")
		{
			if (dq.empty())
				cout << -1 << endl;
			else
				cout << dq.back() << endl;
		}
	}
	return 0;
}