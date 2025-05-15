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

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end()); // 그냥 오름차순 정렬이 제일 최소 시간임

    int res = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += v[i];
        res += temp;
    }

    cout << res << endl;

    return 0;
}