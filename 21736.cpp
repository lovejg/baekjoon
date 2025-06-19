#include <iostream>
#include <queue>
#include <vector>
#define endl '\n'
using namespace std;

int n, m;
char campus[601][601];
// 상하좌우 관련해서는 설명 더 안합니데이
int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};
int res = 0;
bool visit[601][601];

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int row, int col)
{
    queue<pair<int, int>> q;
    visit[row][col] = true;
    q.push({row, col});

    while (!q.empty())
    {
        int curr = q.front().first;
        int curc = q.front().second;
        q.pop();
        if (campus[curr][curc] == 'P') // 사람이면
            res++;

        for (int i = 0; i < 4; i++)
        {
            int nextr = curr + dirr[i];
            int nextc = curc + dirc[i];

            if (!visit[nextr][nextc] && nextr >= 0 && nextr < n && nextc >= 0 && nextc < m && campus[nextr][nextc] != 'X') // 방문 X, 캠퍼스 내, 벽 아님 조건 모두 만족 시
            {
                visit[nextr][nextc] = true;
                q.push({nextr, nextc});
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
            cin >> campus[i][j];
            if (campus[i][j] == 'I') // 시작지점 찾아두기
            {
                startr = i;
                startc = j;
            }
        }
    }

    bfs(startr, startc);

    if (res == 0)
        cout << "TT" << endl;
    else
        cout << res << endl;
    return 0;
}