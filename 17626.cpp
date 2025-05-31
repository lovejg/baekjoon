#include <iostream>
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

    int dp[50001];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1; // 이전값 + 1한거(1도 제곱수고, 이전 값도 제곱수로 표현했을테니까)
        for (int j = 2; j * j <= i; j++)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }

    cout << dp[n] << endl;
    return 0;
}