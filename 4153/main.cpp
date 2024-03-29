#include <iostream>
#include <algorithm>
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
	int arr[3];
	while (1)
	{
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;
		sort(arr, arr + 3);
		if ((arr[2] * arr[2]) == ((arr[0] * arr[0]) + (arr[1] * arr[1])))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}