#include <iostream>
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
	int k;
	while (1)
	{
		cin >> k;
		if (k == 0)
			break;
		string s = to_string(k);
		bool ch = true;
		for (int i = 0; i < s.length(); i++)
			if (s[i] != s[s.length() - i - 1])
			{
				ch = false;
				break;
			}
		if (!ch)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
	return 0;
}