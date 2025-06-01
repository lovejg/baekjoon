#include <iostream>
#include <algorithm>
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

    sort(v.begin(), v.end());

    long long left = 0; // int 쓰면 안됨(값이 꽤 큽니다). 그리고 최소 높이는 v[0] 아니고 0에유
    long long right = v[v.size() - 1];

    int res = 0;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long cal = 0;
        for (int i = 0; i < v.size(); i++)
            if (v[i] > mid)
                cal += (v[i] - mid);

        if (cal >= m) // 덜 잘라도 됨 => 절단기 높이 높여도 됨 or 이게 정답
        {
            res = mid;
            left = mid + 1;
        }
        else // 더 잘라야 됨 => 절단기 높이 낮춰야 됨
            right = mid - 1;
    }

    cout << res << endl;
    return 0;
}