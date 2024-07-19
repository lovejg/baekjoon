#include <iostream>
#include <vector>
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
    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    vector<int> sum;
    sum.push_back(v[0]);
    for (int i = 1; i < n; i++)
        sum.push_back(sum[i - 1] + v[i]);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << sum[b - 1] - sum[a - 2] << endl;
    }
    return 0;
}