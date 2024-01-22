#include <iostream>
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
	int arr[8];
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	bool ch = false;
	int i;
	for (i = 1; i < 8; i++)
	{
		if (arr[i] == arr[i - 1] + 1)
			ch = true;
		else if (arr[i] == arr[i - 1] - 1)
			ch = false;
		else
			break;
	}
	if (i != 8)
		cout << "mixed" << endl;
	else if (!ch)
		cout << "descending" << endl;
	else
		cout << "ascending" << endl;
	return 0;
}