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
    int t;
    cin >> t;

    int dp[11];

    // 초기값 설정
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]; // 점화식이 왜 이런지는 직접 써서 해봅시다(dp의 기본은 노가다임)

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}