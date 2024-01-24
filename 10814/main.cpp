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

bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first == b.first)                                                       // 나이 같으면
        return a.second[a.second.length() - 1] < b.second[b.second.length() - 1]; // 맨 끝 글자. 즉 인덱스 정보로 비교
    else
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
        name.push_back(i); // 인덱스 정보를 이름 맨 끝에 임시로 붙여놓기
        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        v[i].second.pop_back(); // 이름 끝에 붙여놨던 인덱스 정보 제거
        cout << v[i].first << ' ' << v[i].second << endl;
    }
    return 0;
}