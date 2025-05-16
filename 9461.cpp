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

    long long dp[101]; // 이거 조심. n이 커지면 값이 꽤 커서 long long으로 해야 됨(이거 안해서 계속 틀림)

    // 초기값 설정
    dp[0] = 0;
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
        dp[i] = dp[i - 1] + dp[i - 5]; // 그림 좀 보면서 하면 바로 알 수 있음

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}