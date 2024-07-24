#include <iostream>
#include <cstring>
#include <queue>
#define endl '\n'
using namespace std;

bool bechu[60][60];
int m, n;
int dirr[4] = {-1, 1, 0, 0}; // 상하
int dirc[4] = {0, 0, -1, 1}; // 좌우

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int row, int col)
{
    queue<pair<int, int>> q;
    q.push({row, col});
    bechu[row][col] = false; // 지렁이 있으면 배추 없다고 가정(해당 배추는 처리완료된거니까)

    while (!q.empty())
    {
        int cur_row = q.front().first;
        int cur_col = q.front().second;
        q.pop();

        // 이제 상하좌우로 배추를 확인해보자
        for (int i = 0; i < 4; i++)
        {
            int next_row = cur_row + dirr[i];
            int next_col = cur_col + dirc[i];

            if (bechu[next_row][next_col] && next_row >= 0 && next_row < n && next_col >= 0 && next_col < m) // 주변에 배추가 있으면
            {
                q.push({next_row, next_col});      // 큐에 넣고
                bechu[next_row][next_col] = false; // 배추는 없다고 가정
            }
        }
    }
}

int main()
{
    Init();
    int t;
    cin >> t;
    int k;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;

        for (int j = 0; j < k; j++)
        {
            int x, y;
            cin >> x >> y;
            bechu[y][x] = true; // 이거 실수 안하게 조심
        }

        int bug = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (bechu[j][k]) // 배추가 있으면
                {
                    bfs(j, k); // bfs 돌리고
                    bug++;     // 벌레 수 증가
                }
            }
        }
        cout << bug << endl;
        memset(bechu, 0, sizeof(bechu)); // 배추 배열 초기화(다음 테스트 케이스를 위한)
    }
    return 0;
}