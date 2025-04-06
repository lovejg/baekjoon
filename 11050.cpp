#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int fac(int k) // 팩토리얼 함수
{
    if (k == 0)
        return 1;
    return k * fac(k - 1);
}

// 팩토리얼 함수 만들어서 푸니까 편하긴 한데, 그냥 반복문으로 대충 곱셈 나눗셈 챱챱 해도 답 나오긴 함
int main()
{
    Init();
    int n, k;
    cin >> n >> k;
    cout << fac(n) / (fac(k) * fac(n - k)) << endl; // 이항계수 공식 그대로 푼거임
    return 0;
}