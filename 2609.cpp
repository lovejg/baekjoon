#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int cal_gcd(int a, int b) // 얘는 유클리드 호제법이라는 걸 알아야 됨. 정수론 같은거 배우면 거기 나옴. 외우는 것도 낫밷
{
    if (b == 0)
        return a;
    else
        return cal_gcd(b, a % b);
}

int cal_lcm(int a, int b, int g) // 얘는 어릴때 소인수분해? 그런거 좀 해봤으면 상상해보면 이해 될거임
{
    return a * b / g;
}

int main()
{
    Init();
    int a, b;
    cin >> a >> b;

    int gcd = cal_gcd(a, b);
    int lcm = cal_lcm(a, b, gcd);

    cout << gcd << endl;
    cout << lcm << endl;

    return 0;
}