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

// 이 문제 풀 때 알아야 되는게, 3개 중에 반드시 숫자가 하나는 있음. 그 피즈버즈들로만 이루어져있지 않음.
int main()
{
    Init();
    string s[3];

    for (int i = 0; i < 3; i++)
        cin >> s[i];

    int res = 0;

    for (int i = 0; i < 3; i++)
        if (s[i] != "Fizz" && s[i] != "Buzz" && s[i] != "FizzBuzz") // 숫자 찾으면
            res = stoi(s[i]) + (3 - i);                             // 값 알 수 있음

    if (res % 3 == 0 && res % 5 == 0)
        cout << "FizzBuzz" << endl;
    else if (res % 3 == 0)
        cout << "Fizz" << endl;
    else if (res % 5 == 0)
        cout << "Buzz" << endl;
    else
        cout << res << endl;
    return 0;
}