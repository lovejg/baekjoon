#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
	cout << LCM(a, b) << endl;
	return 0;
}