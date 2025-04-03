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
    int n, m;
    cin >> n >> m;
    int arr[101];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int res = 0;

    // 총 3장 더하는거니까 3중 반복문으로 조져야 됨
    for (int i = 0; i < n - 2; i++) // i, i+1, i+2 이런식으로 갈테니까 n-2 미만까지
    {
        for (int j = i + 1; j < n - 1; j++) // j(i+1), j+1(i+2) 이런식으로 갈테니까 n-1 미만까지
        {
            for (int k = j + 1; k < n; k++) // 얘는 끝까지
            {
                int temp = arr[i] + arr[j] + arr[k]; // 다 더한거
                if (temp > m)                        // M을 넘지 말라고 했으니까 넘으면
                    continue;                        // 패스(이거 코드 잘 수정하면 조금 더 최적화도 될지도?)
                if (m - temp < m - res)              // 차이값 비교해서
                    res = temp;                      // 갱신
            }
        }
    }

    cout << res << endl;
    return 0;
}