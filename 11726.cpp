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
    int n;
    cin >> n;

    int dp[1001];

    // 초기값 설정
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;

    for (int i = 5; i <= 1000; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007; // i-1에다가 2x1 붙인거 + i-2에다가 1x2 2개 붙인거 하면 딱 i가 됨

    cout << dp[n] << endl;

    return 0;
}