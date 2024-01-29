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
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        stable_sort(v.begin(), v.end(), greater<>());
    }
    return 0;
}