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
	string str;
	while (1)
	{
		stack<int> s;
		getline(cin, str);
		if (str == ".")
			break;

		bool ch = false;
		for (int i = 0; str[i] != '.'; i++)
		{
			if (str[i] == '(')
				s.push(1);
			else if (str[i] == '[')
				s.push(2);
			else if (str[i] == ')' && !s.empty() && s.top() == 1)
				s.pop();
			else if (str[i] == ')' && !s.empty() && s.top() != 1)
			{
				ch = true;
				break;
			}
			else if (str[i] == ']' && !s.empty() && s.top() == 2)
				s.pop();
			else if (str[i] == ']' && !s.empty() && s.top() != 2)
			{
				ch = true;
				break;
			}
			else if (s.empty() && (str[i] == ')' || str[i] == ']'))
			{
				ch = true;
				break;
			}
		}
		if (ch || !s.empty())
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
	return 0;
}