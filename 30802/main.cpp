#include <iostream>
#define endl '\n'
using namespace std;

int t;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int cal(int k)
{
    if (k % t == 0)
        return k / t;
    else
        return k / t + 1;
}

int main()
{
    Init();
    int n;
    cin >> n;
    int arr[6];
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    int p;
    cin >> t >> p;
    int res = 0;
    for (int i = 0; i < 6; i++)
        res += cal(arr[i]);
    cout << res << endl;
    cout << n / p << ' ' << n % p << endl;
    return 0;
}