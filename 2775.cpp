#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() // 누적합 쓰면 코드 좀 더 최적화 된다는데 귀찮아서 안함
{
    Init();
    int t;
    cin >> t;

    int dp[15][15] = {0};        // 초기화 빼먹지 말기(밑에서 dp+=~ 이런 형태로 쓸거라서 초기화 필수)
    for (int i = 1; i < 15; i++) // 0층 할당
        dp[0][i] = i;

    for (int i = 1; i < 15; i++)          // 층
        for (int j = 1; j < 15; j++)      // 호
            for (int k = 1; k <= j; k++)  // 아래층 다 더하려고 쓰는 반복문
                dp[i][j] += dp[i - 1][k]; // 아래층 호 다 더하기

    // 위에서 이렇게 dp 다 맹글어놓고 밑에서는 결과 출력만 하면 됨
    for (int i = 0; i < t; i++)
    {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << endl;
    }

    return 0;
}