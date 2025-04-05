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
    string s;

    while (1)
    {
        cin >> s;
        int len = s.length();
        if (s[0] == '0' && len == 1) // 0이면
            break;                   // 끝

        bool check = true;                // 팰린드롬수인지 아닌지
        for (int i = 0; i < len / 2; i++) // 맨앞과 맨뒤부터 해서 중간까지 보는거임
        {
            if (s[i] != s[len - i - 1]) // 처음과 끝을 비교(그리고 서로 한칸씩 움직이겠쥬)
            {
                check = false; // 다르면 false로 바꾸고
                break;         // 하나라도 다르면 끝이니 바로 반복문 탈출
            }
        }
        if (!check)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }

    return 0;
}