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

int main() // int 대신 long long 사용!!(int 사용시 아마 시간초과 발생)
{
    Init();
    int k, n;
    cin >> k >> n;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    long long start = 1;
    long long end = v[v.size() - 1];

    long long max = -1;
    while (start <= end)
    {
        long long count = 0;
        long long mid = (start + end) / 2;
        for (int i = 0; i < v.size(); i++)
            count += v[i] / mid;
        if (count < n) // 개수가 적으므로 길이를 줄여야 됨
            end = mid - 1;
        else // 개수가 n개 이상이므로 길이를 늘려야 됨(혹은 최적일수도 있음)
        {
            start = mid + 1;
            if (max < mid)
                max = mid;
        }
    }
    cout << max << endl;
    return 0;
}