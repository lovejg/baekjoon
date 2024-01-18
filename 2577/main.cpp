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
	int A, B, C;
	cin >> A >> B >> C;

	int k = A * B * C;
	string s = to_string(k);

	int arr[10] = {
		0,
	};
	for (int i = 0; i < s.length(); i++)
		arr[s[i] - '0']++;

	for (int i = 0; i <= 9; i++)
		cout << arr[i] << endl;
	return 0;
}