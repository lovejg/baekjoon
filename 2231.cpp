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

int cal(int k) // 심심해서 분해합 계산 함수 만들어봄
{
    int res = k;
    string s = to_string(k); // 자릿수 더할때 문자로 바꿔놓고 하면 개편함
    for (int i = 0; i < s.length(); i++)
        res += s[i] - '0'; // 자릿수 다 더하기

    return res;
}

int main()
{
    Init();
    int n;
    cin >> n;
    int res = 0; // 생성자 없으면 0 출력해야돼서 0으로 초기화

    for (int i = 0; i < n; i++)
    {
        if (cal(i) == n) // 생성자 찾으면
        {
            res = i; // res 갱신하고
            break;   // 끝내기(가장 작은 생성자 찾아야돼서 찾으면 바로 break)
        }
    }

    cout << res << endl; // 만약에 생성자 없으면 break 없이 반복문 다 돌고 0 출력
    return 0;
}