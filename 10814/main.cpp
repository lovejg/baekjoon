#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

// sort와 stable_sort의 차이
// 기본적으로 algorithm의 sort는 quick sort로써, 기존의 순서를 보장하지 않는다
// 그러나 stable_sort는 기존의 순서를 보장한다!

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    Init();
    int n;
    cin >> n;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end(), cmp); // 순서가 보장됨 ==> 등록순 정렬이 알아서 됨

    for (int i = 0; i < n; i++)
        cout << v[i].first << ' ' << v[i].second << endl;
    return 0;
}