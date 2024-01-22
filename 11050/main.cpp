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
    int n, k;
    cin >> n >> k;
    if (k > n / 2)
        k = n - k;
    int ans = 1;
    for (int i = n; i > n - k; i--)
        ans *= i;
    for (int i = 1; i <= k; i++)
        ans /= i;

    cout << ans << endl;
    return 0;
}