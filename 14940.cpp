#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int n, m;
int arr[1001][1001];
int result[1001][1001] = {
    0,
}; // 갈 수 없는 땅은 거리 0으로 해야돼서 0으로 초기화를 해줘야 됨
bool visit[1001][1001];
int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};

struct rc
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

void bfs(int row, int col)
{
    queue<pair<rc, int>> q; // 좌표랑 거리
    visit[row][col] = true;
    q.push({{row, col}, 0});
    // 도착지는 거리 0이니까 굳이 result 배열 건들 필요 x

    while (!q.empty())
    {
        int curr = q.front().first.row;
        int curc = q.front().first.col;
        int curdis = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nextr = curr + dirr[i];
            int nextc = curc + dirc[i];
            int nextdis = curdis + 1;
            if (nextr >= 0 && nextr < n && nextc >= 0 && nextc < m && !visit[nextr][nextc] && arr[nextr][nextc] == 1)
            {
                visit[nextr][nextc] = true;
                q.push({{nextr, nextc}, nextdis});
                result[nextr][nextc] = nextdis;
            }
        }
    }
}

int main()
{
    Init();
    cin >> n >> m;
    int destr, destc;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
            {
                destr = i;
                destc = j;
            }
        }
    }

    bfs(destr, destc);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!visit[i][j] && arr[i][j] == 1)
                result[i][j] = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}