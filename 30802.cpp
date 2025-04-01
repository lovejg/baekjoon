#include <iostream>
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
    int n;
    int shirt[6];
    int t, p;

    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> shirt[i];
    cin >> t >> p;

    int res = 0;
    for (int i = 0; i < 6; i++)
    {
        if (shirt[i] % t == 0)       // 묶음으로 샀을 때 딱 나눠 떨어지면
            res += shirt[i] / t;     // 그냥 그만큼만 사면 됨
        else                         // 근데 딱 나눠떨어지지가 않으면
            res += shirt[i] / t + 1; // 하나 더 사야됨
    }

    cout << res << endl;
    cout << n / p << ' ' << n % p << endl; // 펜은 그냥 몫과 나머지 출력이 끝
    return 0;
}