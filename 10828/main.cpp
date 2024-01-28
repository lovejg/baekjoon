#include <iostream>
#include <stack>
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
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		int k;
		if (str == "push")
		{
			cin >> k;
			s.push(k);
		}
		else if (str == "pop")
		{
			if (s.empty())
				cout << -1 << endl;
			else
			{
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (str == "top")
		{
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
		else if (str == "size")
			cout << s.size() << endl;
		else if (str == "empty")
			cout << s.empty() << endl;
	}
	return 0;
}