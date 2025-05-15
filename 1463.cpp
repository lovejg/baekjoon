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

    int dp[1000001]; // dp로 풀어야 됨

    // 초기값 설정
    dp[0] = 0;
    dp[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1];                                 // 일단 얘가 기본
        if (i % 3 == 0 && i % 2 == 0)                      // 근데 만약에 2, 3 둘다 나누어 떨어지면
            dp[i] = min(min(dp[i], dp[i / 3]), dp[i / 2]); // 셋 중 가장 작은 놈을 선택
        else if (i % 3 == 0)                               // 혹은 3으로 나누어 떨어진다면
            dp[i] = min(dp[i], dp[i / 3]);
        else if (i % 2 == 0) // 혹은 2로 나누어 떨어진다면
            dp[i] = min(dp[i], dp[i / 2]);

        dp[i]++; // 1빼거나 2나 3으로 나눈거 자체가 결국 연산 한번 수행한거니까
    }

    cout << dp[n] << endl;
    return 0;
}