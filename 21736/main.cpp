#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};
bool visit[601][601];
char arr[601][601];
int people = 0;
int n, m;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int row, int col)
{
    visit[row][col] = true;
    queue<pair<int, int>> q;
    q.push({row, col});

    while (!q.empty())
    {
        int cur_row = q.front().first;
        int cur_col = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int next_row = cur_row + dirr[i];
            int next_col = cur_col + dirc[i];
            if (next_row >= 0 && next_row < n && next_col >= 0 && next_col < m && !visit[next_row][next_col] && arr[next_row][next_col] != 'X')
            {
                visit[next_row][next_col] = true;
                if (arr[next_row][next_col] == 'P')
                    people++;
                q.push({next_row, next_col});
            }
        }
    }
}

int main()
{
    Init();
    cin >> n >> m;

    int startr, startc;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'I')
            {
                startr = i;
                startc = j;
            }
        }
    }

    bfs(startr, startc);

    if (people == 0)
        cout << "TT" << endl;
    else
        cout << people << endl;

    return 0;
}