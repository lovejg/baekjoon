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
    cin >> n;

    int res = 10000; // 대충 큰 값(봉지수가 아무리 많아도 이거보다 많을순 없음)

    for (int i = 0; i <= 1000; i++) // n이 최대 5000이니까 5kg 봉지는 최대 1000개
    {
        for (int j = 0; j <= 1666; j++) // n이 최대 5000이니까 3kg 봉지는 최대 1666개
        {
            if ((i * 5) + (j * 3) == n && (i + j) < res) // 합이 n이고, 현재 최솟값보다 작을때(최소 봉지수 구해야되니까)
                res = i + j;
        }
    }

    if (res == 10000)       // 만약에 res값이 그대로면 한번도 합이 딱 n이 된 적 없는거니까
        cout << -1 << endl; // -1 출력
    else
        cout << res << endl;
    return 0;
}