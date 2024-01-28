#include <iostream>
#include <stack>
#include <string>
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
	for (int i = 0; i < n; i++)
	{
		string str;
		stack<int> s;
		cin >> str;
		bool ch = false;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
				s.push(1);
			else if (str[i] == ')' && s.empty())
			{
				ch = true;
				break;
			}
			else if (str[i] == ')' && !s.empty())
				s.pop();
		}
		if (ch || !s.empty())
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}