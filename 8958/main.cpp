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
	int T;
	cin >> T;
	string s;
	for (int i = 0; i < T; i++)
	{
		cin >> s;
		int h = 1;
		int score = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
				score += h++;
			else if (s[j] == 'X')
				h = 1;
		}
		cout << score << endl;
	}
	return 0;
}