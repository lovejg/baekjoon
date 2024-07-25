#include <iostream>
#define endl '\n'
using namespace std;

bool arr[129][129];
int blue = 0;
int white = 0;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void split(int len, int r, int c) // len: 한변의 길이, r: 좌상단 행좌표, c: 좌상단 열좌표
{
    for (int i = r; i < r + len; i++)
    {
        for (int j = c; j < c + len; j++)
        {
            if (arr[r][c] != arr[i][j])
            {
                split(len / 2, r, c);
                split(len / 2, r + len / 2, c);
                split(len / 2, r, c + len / 2);
                split(len / 2, r + len / 2, c + len / 2);
                return;
            }
        }
    }

    if (arr[r][c] == 0)
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

    split(n, 0, 0);
    cout << white << ' ' << blue << endl;
    return 0;
}