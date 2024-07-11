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

    int dp[1000001];
    dp[0] = dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
            dp[i] = min(min(dp[i / 3], dp[i / 2]), dp[i - 1]);
        else if (i % 3 == 0)
            dp[i] = min(dp[i / 3], dp[i - 1]);
        else if (i % 2 == 0)
            dp[i] = min(dp[i / 2], dp[i - 1]);
        else
            dp[i] = dp[i - 1];

        dp[i]++;
    }

    cout << dp[n] << endl;
    return 0;
}