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
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int i = 0; i < n; i++)
    {
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)                                               // 자기자신인 경우
                continue;                                             // 패스
            if (v[i].first < v[j].first && v[i].second < v[j].second) // 나보다 덩치 큰 놈이 있다면
                rank++;                                               // 랭크 하나 밀림
        }
        cout << rank;
        if (i != n - 1) // 마지막 빼고 나머지는 공백도 출력
            cout << ' ';
    }
    cout << endl;

    return 0;
}