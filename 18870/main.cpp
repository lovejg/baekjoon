#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<int> v;
    vector<int> vv;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
        vv.push_back(k);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < n; i++)
        cout << lower_bound(v.begin(), v.end(), vv[i]) - v.begin() << ' ';
    return 0;
}