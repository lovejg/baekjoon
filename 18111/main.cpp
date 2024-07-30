#include <iostream>
#define endl '\n'
using namespace std;

int arr[501][501];
int res_hei = 0;
int res_time = 0;
int n, m, b;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void cal(int hei)
{
    int temp_b = b;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int diff = arr[i][j] - hei;
            if (diff > 0) // 블럭 제거
                time += (diff * 2);
            else if (diff < 0) // 블록 추가
                time -= diff;
            temp_b += diff;
        }
    }

    if (temp_b < 0)
        return;

    if (time < res_time || res_time == 0)
    {
        res_time = time;
        res_hei = hei;
    }
    else if (time == res_time)
        res_hei = hei; // 어차피 높이 작은거부터 하니까 같으면 그냥 갱신
}

int main()
{
    Init();
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

    for (int i = min; i <= max; i++)
        cal(i);

    cout << res_time << ' ' << res_hei << endl;
    return 0;
}