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

// 아주 유명한 DP의 대표 문제라고 할 수 있음
int main()
{
    Init();
    int n;
    cin >> n;

    int score[301];
    for (int i = 1; i <= n; i++) // 범위 안 헷갈리게 조심
        cin >> score[i];

    int dp[301];

    // 초기값 설정
    dp[0] = 0;
    dp[1] = score[1];
    dp[2] = dp[1] + score[2];
    dp[3] = max(score[1], score[2]) + score[3];

    for (int i = 4; i <= n; i++)
        dp[i] = max(dp[i - 3] + score[i - 1], dp[i - 2]) + score[i]; // 3개 연속 밟으면 안되는 거 고려해서 짠거임

    cout << dp[n] << endl;
    return 0;
}