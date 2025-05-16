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

    // 초기값 설정
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= 1000; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007; // 11726과 차이가, i-2에서 1x2 2개를 붙인다고 했는데, 1x2 2개 대신에 2x2를 붙여도 돼서 i-2는 두배 해줘야 됨

    cout << dp[n] << endl;

    return 0;
}