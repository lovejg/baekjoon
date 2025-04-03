#include <iostream>
#include <string>
#include <cmath>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 사실 이 코드는 50점짜리 코드임
// 100점 받고 싶으면 (a*b) mod m == ((a%m)*(b%m))%m 요딴 거 써야됨
// 모듈러 성질이라는건데, 저거 쓰면 100점 받긴 하는데, 코테에 나올거 같지가 않아서 개무시함 ㅅㄱ
int main()
{
    Init();
    int r = 31;
    int m = 1234567891;
    int l;
    string s;

    cin >> l >> s;

    int res = 0;
    for (int i = 0; i < l; i++)
    {
        int cov = s[i] - 'a' + 1; // a가 1이니까 1 더해주기
        res += cov * pow(r, i);   // pow는 제곱 함수
    }

    cout << res % m << endl; // 마지막에 m으로 나눈 나머지 출력

    return 0;
}