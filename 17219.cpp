#include <iostream>
#include <string>
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

    map<string, string> mapp;

    for (int i = 0; i < n; i++)
    {
        string site, pwd;
        cin >> site >> pwd;
        mapp.insert({site, pwd});
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        cout << mapp[s] << endl;
    }

    return 0;
}