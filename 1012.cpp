#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

bool bechu[60][60];          // 배추밭
int dirr[4] = {-1, 1, 0, 0}; // 행 기준 상하좌우
int dirc[4] = {0, 0, -1, 1}; // 열 기준 상하좌우

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int row, int col, int m, int n)
{
    queue<pair<int, int>> q;
    q.push({row, col});
    bechu[row][col] = false; // 어차피 이렇게 false로 바꿀거라서 굳이 방문 배열 필요 x

    while (!q.empty())
    {
        int curr = q.front().first;
        int curc = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nextr = curr + dirr[i];
            int nextc = curc + dirc[i];

            if (bechu[nextr][nextc] && nextr >= 0 && nextr < n && nextc >= 0 && nextc < m) // 배추밭 범위 안에 들어오고, 배추 있으면
            {
                q.push({nextr, nextc});
                bechu[nextr][nextc] = false;
            }
        }
    }
}

int main()
{
    Init();
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int m, n, k;
        cin >> m >> n >> k; // 배추밭 가로길이, 세로길이, 배추 위치 위치
        for (int j = 0; j < k; j++)
        {
            int x, y;
            cin >> x >> y;
            bechu[y][x] = true; // 행: y, 열: x인점 주의
        }

        int bug = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (bechu[j][k])
                {
                    bfs(j, k, m, n); // bfs에서 주변 영역 배추 다 false로 바꿔줄거임
                    bug++;
                }
            }
        }
        cout << bug << endl;
    }
    return 0;
}