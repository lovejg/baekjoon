#include <iostream>
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
    int n;
    int res = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
        res += s[i] - '0'; // 각 자릿수 res에 더해주기. 문자니까 '0' 빼주기

    cout << res << endl;
    return 0;
}