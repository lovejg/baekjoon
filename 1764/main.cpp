#include <iostream>
#include <set>
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

int main()
{
    Init();
    int n, m;
    cin >> n >> m;

    set<string> s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        int size = s.size();
        s.insert(str);
        if (s.size() == size) // insert 해도 크기 동일 ==> 같아서 중복 처리됨
        {
            count++;
            v.push_back(str);
        }
    }

    sort(v.begin(), v.end());
    cout << count << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    return 0;
}