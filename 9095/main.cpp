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
    int dp[11];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}