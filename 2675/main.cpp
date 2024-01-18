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
	int R;
	string s;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> R;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
			for (int k = 0; k < R; k++)
				cout << s[j];
		cout << endl;
	}
	return 0;
}