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
    map<string, int> m;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string a, b;
            cin >> a >> b;
            m[b]++; // 초기값을 0이라고 받아들임
        }
        int result = 1;
        for (auto it = m.begin(); it != m.end(); it++)
            result *= (it->second + 1);
        cout << result - 1 << endl;
        m.clear(); // clear 해주는거 까먹지 말기!
    }
    return 0;
}