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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int h, w, n;
        cin >> h >> w >> n;

        // 주석 달기 귀찮아서 식이 왜 이렇게 나오는지는 직접 해보시기 바랍니다
        int q = n / h + 1;
        int r = n % h;
        if (r == 0)                            // 맨 꼭대기층, 나머지가 0인 케이스
            cout << 100 * h + (q - 1) << endl; // 따로 예외처리 해주기
        else                                   // 일반적인 케이스
            cout << 100 * r + q << endl;
    }
    return 0;
}