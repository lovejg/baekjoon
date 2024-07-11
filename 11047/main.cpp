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
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > k) // 목표값보다 비싼 동전은 애초에 안넣기
            continue;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<int>()); // 내림차순 정렬(편의를 위한걸로 굳이 안해도 됨)

    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        while (k >= v[i])
        {
            k -= v[i];
            res++;
        }
        if (k == 0)
            break;
    }

    cout << res << endl;
    return 0;
}