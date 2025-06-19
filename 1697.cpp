#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int n, k;
int res = 0;
bool visit[100001];

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs()
{
    queue<pair<int, int>> q; // 좌표뿐만 아니라 걸리는 시간도 저장해야돼서 pair<int, int>로
    visit[n] = true;
    q.push({n, 0});

    while (!q.empty())
    {
        int curpos = q.front().first;
        int curtime = q.front().second;
        q.pop();

        if (curpos == k) // 도착하면
        {
            cout << curtime << endl; // 바로 출력하고
            return;                  // 끝(다른 도착하는 경우의 수도 봐야되는거 아님? => 어차피 이거 큐라서 제일 빨리 오는 놈이 curtime도 제일 짧음)
        }

        // 이동할 수 있는 3가지 경우의 수
        int next1 = curpos - 1;
        int next2 = curpos + 1;
        int next3 = curpos * 2;
        int nexttime = curtime + 1;

        if (next1 >= 0 && next1 <= 100000 && !visit[next1])
        {
            visit[next1] = true;
            q.push({next1, nexttime});
        }

        if (next2 >= 0 && next2 <= 100000 && !visit[next2])
        {
            visit[next2] = true;
            q.push({next2, nexttime});
        }

        if (next3 >= 0 && next3 <= 100000 && !visit[next3])
        {
            visit[next3] = true;
            q.push({next3, nexttime});
        }
    }
}

int main()
{
    Init();
    cin >> n >> k;

    bfs();

    return 0;
}