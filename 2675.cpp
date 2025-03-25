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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int repeat;
        string s;
        cin >> repeat >> s;

        for (int j = 0; j < s.length(); j++) // 전체 문자에 대해
            for (int k = 0; k < repeat; k++) // repeat만큼
                cout << s[j];                // 반복 출력

        cout << endl;
    }

    return 0;
}