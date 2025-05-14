#include <iostream>
#include <map>
#include <vector>
#include <string>
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
    map<string, int> mmap; // int, string이 약간 국룰 느낌인데, string, int 순으로 하는게 나름 킥
    vector<string> v;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        mmap.insert({s, i});
        v.push_back(s);
    }

    for (int i = 0; i < m; i++)
    {
        char input[21]; // isdigit 쓰려고 char로 해줌. 포켓몬 이름 최대 20글자
        cin >> input;
        if (isdigit(input[0])) // 숫자면
            cout << v[atoi(input) - 1] << endl;
        else // 포켓몬 이름이면
            cout << mmap[input] << endl;
    }
    return 0;
}