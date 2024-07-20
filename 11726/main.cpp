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

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2]) % 10007;
    }

    cout << dp[n] << endl;
    return 0;
}