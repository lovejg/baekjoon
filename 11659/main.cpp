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

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
    }
    return 0;
}