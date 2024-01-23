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

bool check(int a)
{
	string s = to_string(a);
	for (int i = 0; i < s.length() - 2; i++)
		if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6')
			return true;
	return false;
}

int main()
{
	Init();
	int N;
	cin >> N;
	int i = 666;
	while (1)
	{
		if (check(i))
			N--;
		if (N == 0)
			break;
		i++;
	}
	cout << i << endl;
	return 0;
}