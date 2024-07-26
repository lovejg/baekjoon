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
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    long long start = 0; // 최소 높이는 v[0]가 아니라 0임에 주목
    long long end = v[v.size() - 1];

    int max = -1;
    while (start <= end)
    {
        long long mid = (start + end) / 2;
        long long temp = 0;
        for (int i = 0; i < v.size(); i++)
            if (v[i] - mid > 0)
                temp += (v[i] - mid);
        if (temp >= m)
        {
            if (max < mid) // 구해야 되는게 temp가 아닌 mid, 즉 높이를 구해야된다는 점 명심
                max = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout << max << endl;
    return 0;
}