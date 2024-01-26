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
	char c[101];
	stack<int> s;
	while (1)
	{
		cin.getline(c, 101);
		if (c == ".")
			break;
		for (int i = 0; c[i] != '.'; i++)
		{
			if (c[i] == '(')
				s.push(1);
			else if (c[i] == '{')
				s.push(2);
			else if (c[i] == '[')
				s.push(3);
			else if (c[i] == ')' && s.top() == 1)
				s.pop();
			else if (c[i] == ')' && s.top() != 1)
				break;
			else if (c[i] == '}' && s.top() == 2)
				s.pop();
			else if (c[i] == '}' && s.top() != 2)
				break;
			else if (c[i] == ']' && s.top() == 3)
				s.pop();
			else if (c[i] == ']' && s.top() != 3)
				break;
		}
		if (!s.empty())
			cout << "no" << endl;
		else
			cout << "yes" << endl;

		while (!s.empty())
			s.pop();
	}
	return 0;
}