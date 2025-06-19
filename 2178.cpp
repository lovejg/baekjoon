#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define endl '\n'
using namespace std;

int n, m;
vector<string> v;
bool visit[101][101];
int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};

// 이렇게 좌표랑 다른 정보도 넣어야 되는 경우, 그러니까 pair로 안되는 경우는 구조체 만들어서 하면 좋음
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

void bfs()
{
    queue<pair<pos, int>> q; // 좌표랑 이동한 칸 수
    visit[0][0] = true;
    q.push({{0, 0}, 1}); // 한칸도 이동한걸로 침

    while (!q.empty())
    {
        int curr = q.front().first.row;
        int curc = q.front().first.col;
        int curcount = q.front().second;
        q.pop();

        if (curr == n - 1 && curc == m - 1)
        {
            cout << curcount << endl;
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int nextr = curr + dirr[i];
            int nextc = curc + dirc[i];

            if (nextr >= 0 && nextr < n && nextc >= 0 && nextc < m && !visit[nextr][nextc] && v[nextr][nextc] == '1') // 범위 안, 방문 x, 이동 가능한 칸(1) 조건을 모두 만족 시
            {
                visit[nextr][nextc] = true;
                q.push({{nextr, nextc}, curcount + 1});
            }
        }
    }
}

int main()
{
    Init();
    cin >> n >> m;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    bfs();

    return 0;
}