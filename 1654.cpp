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
    int k, n;
    cin >> k >> n;

    vector<int> v;

    for (int i = 0; i < k; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    long long left = 1; // 초과 날 수도 있어서 int 대신 long long으로
    long long right = v[v.size() - 1];

    long long res = -1;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        int count = 0; // 랜선개수
        for (int i = 0; i < k; i++)
            count += v[i] / mid;

        if (count < n) // 랜선이 부족 => 랜선 길이가 너무 길다는 뜻 => 길이를 줄이자
            right = mid - 1;
        else // 딱 맞거나, 랜선이 남음 => 길이를 최대로 해야되니까 일단 저장은 해두고 최적값을 구해보자
        {
            if (res < mid)
                res = mid; // N개보다 많이 만드는것도 N개 만드는거에 포함된다는점 참고
            left = mid + 1;
        }
    }

    cout << res << endl;

    return 0;
}