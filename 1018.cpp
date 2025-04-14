#include <iostream>
#include <vector>
#include <string>
#define endl '\n'
using namespace std;

char arr[51][51];
int n, m;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int cal(int row, int col)
{
    int black = 0; // 행+열이 짝수인곳을 모두 검은색으로 하는 경우
    int white = 0; // 행+열이 짝수인곳을 모두 흰색으로 하는 경우

    for (int i = row; i < row + 8; i++)
    {
        for (int j = col; j < col + 8; j++)
        {
            if ((i + j) % 2 == 1) // 행+열이 홀수
            {
                if (arr[i][j] == 'B')
                    black++;
                else
                    white++;
            }
            else // 행+열이 짝수
            {
                if (arr[i][j] == 'B')
                    white++;
                else
                    black++;
            }
        }
    }

    return min(black, white); // 더 작은 값을 반환(최솟값 구하는 문제니까)
}

int main()
{
    Init();
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int res = 1e9; // 엄청 큰 int 값(최솟값 갱신을 위한)

    for (int i = 0; i < n - 7; i++) // 8 * 8로 잘라야되니까 0부터 n-7까지 해주면 됨(가로) => 궁금하면 직접 하나 값 넣고 상상해봅시다
    {
        for (int j = 0; j < m - 7; j++) // 8 * 8로 잘라야되니까 0부터 m-7까지 해주면 됨(세로)
        {
            int cost = cal(i, j);
            if (cost < res)
                res = cost;
        }
    }

    cout << res << endl;

    return 0;
}