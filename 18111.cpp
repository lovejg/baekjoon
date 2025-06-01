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
    int arr[501][501];

    int n, m, b;
    cin >> n >> m >> b;

    int max = -1;
    int min = 257;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > max)
                max = arr[i][j];
            else if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    int res_time = 0;
    int res_hei = 0;
    for (int i = min; i <= max; i++)
    {
        int time = 0;
        int block = b;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (arr[j][k] > i) // 블록 제거해야됨
                {
                    time += 2 * (arr[j][k] - i);
                    block += (arr[j][k] - i);
                }
                else if (arr[j][k] < i) // 블록 추가해야됨
                {
                    time += (i - arr[j][k]);
                    block -= (i - arr[j][k]);
                }
            }
        }
        if (block < 0) // 블록이 부족하면 의미가 없음
            continue;
        else
        {
            if (time < res_time || res_time == 0) // res_time==0은 첫 루프
            {
                res_time = time;
                res_hei = i;
            }
            else if (time == res_time) // 시간이 같으면
                res_hei = i;           // 어차피 반복문에서 i(높이) 값은 점점 커지니까, 더 큰 값인 새 i로 갱신
        }
    }

    cout << res_time << ' ' << res_hei << endl;
    return 0;
}