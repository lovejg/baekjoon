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
    int dp0[41];
    int dp1[41];
    int T;
    cin >> T;
    dp0[0] = 1;
    dp1[0] = 0;
    dp0[1] = 0;
    dp1[1] = 1;
    for (int i = 2; i <= 40; i++)
    {
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp1[i - 2];
    }
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << dp0[n] << ' ' << dp1[n] << endl;
    }
    return 0;
}