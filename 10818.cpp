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
    vector<int> v; // sort 쓸 때 배열보다 벡터가 아주 조금 더 편함(저는 그래요)
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());                // algorithm stl에 있는 sort로 정렬(날먹)
    cout << v[0] << ' ' << v[n - 1] << endl; // 날먹한거 그대로 출력(최소는 첫 원소, 최대는 끝 원소)
    return 0;
}