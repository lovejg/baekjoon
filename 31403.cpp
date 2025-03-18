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
    string a, b, c; // 문자 입력(최대 네자리라서 char이 아닌 string으로 받음)
    int q, w, e;    // 숫자 입력

    cin >> a >> b >> c;

    // q, w, e는 stoi 이용해서 a, b, c를 int 값으로 바꾼 것
    q = stoi(a);
    w = stoi(b);
    e = stoi(c);

    cout << q + w - e << endl;

    // 일단 a+b를 문자열로써 붙여줌. string은 이렇게 js처럼 +가 된다는 점.
    string s = a + b;

    cout << stoi(s) - e << endl; // stoi를 이용해서 int값으로 바꾼 뒤에 연산

    return 0;
}