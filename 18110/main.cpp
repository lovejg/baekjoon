#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
	}
	int h = round(n * 0.15); // 여기는 형 변환이 따로 필요없음
	sort(v.begin(), v.end());

	int sum = 0;
	for (int i = h; i < v.size() - h; i++)
		sum += v[i];

	n -= 2 * h;
	cout << round(double(sum) / double(n)) << endl; // 여긴 나눗셈이니까 형 변환 필요
	return 0;
}