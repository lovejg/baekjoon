#include <iostream>
#include <string>
#include <vector>
#include <map>
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
    map<string, int> mapp;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mapp.insert({s, i + 1});
        v.push_back(s);
    }

    for (int i = 0; i < m; i++)
    {
        int k = -1;
        string s;
        cin >> s;
        if (isdigit(s[0])) // 숫자면
            k = stoi(s);

        if (k == -1) // 문자
            cout << mapp[s] << endl;
        else // 숫자
            cout << v[k - 1] << endl;
    }
    return 0;
}