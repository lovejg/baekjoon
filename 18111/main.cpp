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
    int n, m, b;
    cin >> n >> m >> b;

    int arr[501][501];
    int min = 257;
    int max = -1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (min > arr[i][j])
                min = arr[i][j];
            if (max < arr[i][j])
                max = arr[i][j];
        }

    int best_time = 1e9; // int max value
    int best_hei = 257;
    int start = min;
    int end = max;
    while (start <= end)
    {
        int time = 0;
        int block = b;
        int mid = (start + end) / 2;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < mid) // 블록 추가
                {
                    int use = mid - arr[i][j];
                    block -= use;
                    time += use;
                }
                else if (arr[i][j] > mid) // 블록 제거
                {
                    int store = arr[i][j] - mid;
                    block += store;
                    time += 2 * store;
                }
            }
        if (time < best_time && block >= 0)
        {
            best_time = time;
            best_hei = mid;
        }
        else
        {
            if (block < 0) // 높이를 줄여야 됨(블록을 너무 많이 사용하는거니까)
                end = mid - 1;
            else // 블럭은 충분한데 시간이 너무 길다 ==> 제거가 2초나 걸리니까 제거 작업을 줄여야 됨(즉 높이를 높여야 됨)
                start = mid + 1;
        }
    }
    cout << best_time << ' ' << best_hei << endl;
    return 0;
}