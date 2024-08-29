#include <iostream>
#include <string>
#include <queue>
#define endl '\n'
using namespace std;

int arr[101][101];
bool visit[101][101];
int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};
int n, m;

struct pos
{
    int row;
    int col;
};

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int startr, int startc)
{
    visit[startr][startc] = true;
    queue<pair<pos, int>> q; // 좌표, 거리
    pos p;
    p.row = startr;
    p.col = startc;
    q.push({p, 1}); // 시작 위치도 포함하니까 초기값이 1

    while (!q.empty())
    {
        int curr = q.front().first.row;
        int curc = q.front().first.col;
        int dis = q.front().second;
        q.pop();

        if (curr == n - 1 && curc == m - 1)
        {
            cout << dis << endl;
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int nextr = curr + dirr[i];
            int nextc = curc + dirc[i];

            if (nextr >= 0 && nextr < n && nextc >= 0 && nextc < m && !visit[nextr][nextc] && arr[nextr][nextc] == 1)
            {
                pos pp;
                pp.row = nextr;
                pp.col = nextc;
                q.push({pp, dis + 1});
                visit[nextr][nextc] = true;
            }
        }
    }
}

int main()
{
    Init();
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
            arr[i][j] = s[j] - '0';
    }

    bfs(0, 0);
    return 0;
}