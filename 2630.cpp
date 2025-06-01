#include <iostream>
#define endl '\n'
using namespace std;

bool arr[129][129];
int white = 0;
int blue = 0;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void func(int len, int row, int col) // 순서대로 한변 길이, 좌상단의 행, 열좌표
{
    for (int i = row; i < row + len; i++)
    {
        for (int j = col; j < col + len; j++)
        {
            if (arr[row][col] != arr[i][j]) // 좌상단을 기준점으로 두고, 다르다면
            {
                // 네 방면으로 쪼개주기
                func(len / 2, row, col);
                func(len / 2, row + len / 2, col);
                func(len / 2, row, col + len / 2);
                func(len / 2, row + len / 2, col + len / 2);
                return;
            }
        }
    }

    // 다 같다면 이 부분으로 올거임
    if (!arr[row][col]) // 기준점 색에 따라서 색종이++
        white++;
    else
        blue++;
}

int main()
{
    Init();
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    func(n, 0, 0);

    cout << white << ' ' << blue << endl;

    return 0;
}