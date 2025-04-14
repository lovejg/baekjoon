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

bool check(int k) // 종말의 수인지 확인하는 함수
{
    string s = to_string(k);
    int i;
    for (i = 0; i < s.length() - 2; i++)
        if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6')
            return true;

    return false;
}

int main()
{
    Init();
    int n;
    cin >> n;
    int k = 666;

    // 그냥 666부터 1씩 늘리면서 찾아내는 레전드 노가다 코드(브루트 포스니까 이게 맞긴함)
    while (1)
    {
        if (check(k)) // 종말의 수가 맞으면
            n--;      // 카운트 하나 깎기
        if (n == 0)   // 카운트 0 되면 찾은거니까
            break;    // 끝
        k++;
    }

    cout << k << endl;

    return 0;
}