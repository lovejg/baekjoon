#include <iostream>
#include <set>
#include <vector>
#include <string>
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
    set<string> s;
    string str;
    vector<string> v; // 정답 넣을거임

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;
        int size = s.size(); // 넣기전 size
        s.insert(str);
        if (s.size() == size) // 넣기 전후가 같다 => 중복됐다 => 듣보잡이다
            v.push_back(str);
    }

    sort(v.begin(), v.end()); // 사전순으로 출력하래서 sort

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}