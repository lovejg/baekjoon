#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

bool visit[100001];

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int start, int end)
{
    queue<pair<int, int>> q; // {시간, 위치}
    q.push({0, start});
    visit[start] = true;

    while (!q.empty())
    {
        int curtime = q.front().first;
        int curpos = q.front().second;
        q.pop();
        if (curpos == end)
        {
            cout << curtime << endl;
            return;
        }

        int next1 = curpos + 1;
        int next2 = curpos - 1;
        int next3 = curpos * 2;
        int nexttime = curtime + 1;

        if (next1 <= 100000 && next1 >= 0 && !visit[next1])
        {
            visit[next1] = true;
            q.push({nexttime, next1});
        }

        if (next2 <= 100000 && next2 >= 0 && !visit[next2])
        {
            visit[next2] = true;
            q.push({nexttime, next2});
        }

        if (next3 <= 100000 && next3 >= 0 && !visit[next3])
        {
            visit[next3] = true;
            q.push({nexttime, next3});
        }
    }
}

int main()
{
    Init();
    int n, k;
    cin >> n >> k;

    bfs(n, k);

    return 0;
}