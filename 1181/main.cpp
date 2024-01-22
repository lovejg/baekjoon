#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool cmp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main()
{
	Init();
	int N;
	cin >> N;

	vector<string> v;
	string s;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	return 0;
}