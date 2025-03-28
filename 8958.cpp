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
        int res = 0;  // 결과값
        int temp = 0; // 현재 점수 +값
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'X') // X면
                temp = 0;    // 점수값 초기화
            else             // O면
            {
                temp++;      // 점수값 1 올라가고
                res += temp; // 결과에 더하기
            }
        }
        cout << res << endl;
    }
    return 0;
}