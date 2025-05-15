#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 이 문제는 dp로 안 풀면 무조건 시간 초과
int main()
{
    Init();
    int t;
    cin >> t;

    int dp_zero[41];
    int dp_one[41];

    // dp 초기값 설정
    dp_zero[0] = 1;
    dp_zero[1] = 0;
    dp_one[0] = 0;
    dp_one[1] = 1;

    // 논리 자체는 기본 피보나치랑 동일함
    for (int i = 2; i <= 40; i++)
    {
        dp_zero[i] = dp_zero[i - 1] + dp_zero[i - 2];
        dp_one[i] = dp_one[i - 1] + dp_one[i - 2];
    }

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << dp_zero[n] << ' ' << dp_one[n] << endl;
    }

    return 0;
}