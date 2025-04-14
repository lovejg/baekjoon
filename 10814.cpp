#include <iostream>
#include <string>
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

bool comp(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first; // stable_sort 덕분에 나이에 대한 정렬만 해주면 되니까 개꿀이다
}

int main()
{
    Init();
    int n;
    cin >> n;
    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        string s;
        cin >> k >> s;
        v.push_back({k, s});
    }

    // 기본적으로 sort는 quick sort로써, 기존의 순서를 보장하지 않는다
    // 그러나 stable_sort는 기존의 순서를 보장한다
    // 문제 보면 나이 같을 시 먼저 가입한 사람이 앞에 오게 하랬는데, 기존 순서 보장하면 입력 순서대로니까 이걸 신경 안써도 된다
    stable_sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n; i++)
        cout << v[i].first << ' ' << v[i].second << endl;

    return 0;
}