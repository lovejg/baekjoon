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

// 다른 언어 쓰면 어렵나? 왜 이딴 문제가 실버?
int main()
{
    Init();
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v[i] << endl;

    return 0;
}