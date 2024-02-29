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
    int T;
    cin >> T;
    long long dp[101];
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    dp[6] = 3;
    dp[7] = 4;
    dp[8] = 5;
    dp[9] = 7;

    for (int i = 10; i < 101; i++)
        dp[i] = dp[i - 1] + dp[i - 5];

    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}