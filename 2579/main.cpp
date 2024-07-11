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
    int arr[301];
    int dp[301];

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];
    dp[3] = max(arr[1], arr[2]) + arr[3];
    for (int i = 4; i <= n; i++)
        dp[i] = max(dp[i - 3] + arr[i - 1], dp[i - 2]) + arr[i];

    cout << dp[n] << endl;
    return 0;
}