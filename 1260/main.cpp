#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define endl '\n'
using namespace std;

int n, m, v; // 순서대로 정점 개수, 간선 개수, 시작 정점
vector<int> vec[1001];
bool dfs_visit[1001];
bool bfs_visit[1001];
vector<int> bfs_ans;
vector<int> dfs_ans;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    bfs_visit[start] = true;
    bfs_ans.push_back(start);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < vec[cur].size(); i++)
        {
            int next = vec[cur][i];
            if (!bfs_visit[next])
            {
                bfs_visit[next] = true;
                q.push(next);
                bfs_ans.push_back(next);
            }
        }
    }
}

void dfs(int start)
{
    dfs_visit[start] = true;
    dfs_ans.push_back(start);

    for (int i = 0; i < vec[start].size(); i++)
        if (!dfs_visit[vec[start][i]])
            dfs(vec[start][i]);
}

int main()
{
    Init();
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    // sort 꼭 해줘야됨(정점 작은거부터 방문이니까)
    for (int i = 1; i <= n; i++) // 1부터인거 조심(정점번호)
        sort(vec[i].begin(), vec[i].end());

    dfs(v);
    bfs(v);

    for (int i = 0; i < dfs_ans.size(); i++)
        cout << dfs_ans[i] << ' ';

    cout << endl;

    for (int i = 0; i < bfs_ans.size(); i++)
        cout << bfs_ans[i] << ' ';
    return 0;
}