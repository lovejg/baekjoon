#include <iostream>
#include <math.h>
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
	int L;
	cin >> L;
	char a;
	long long sum = 0;
	for (int i = 0; i < L; i++)
	{
		cin >> a;
		long long k = pow(31, i);
		sum += k * (a - 'a' + 1);
		sum %= 1234567891;
	}
	cout << sum << endl;
	return 0;
}

// large는 구현 못함(모듈러의 성질 쓰면 된다는데 굳이 거기까지 공부할 필요는 없다고 생각해서 넘어감)