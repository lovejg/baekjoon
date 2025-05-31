#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define endl '\n'
using namespace std;

int n, m; // 정점 개수, 간선 개수, 시작 정점 번호
vector<int> vec[1001];
bool dfs_visit[1001];
bool bfs_visit[1001];
vector<int> dfs_res;
vector<int> bfs_res;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dfs(int start)
{
    dfs_visit[start] = true;
    dfs_res.push_back(start);

    for (int i = 0; i < vec[start].size(); i++)
        if (!dfs_visit[vec[start][i]])
            dfs(vec[start][i]);
}

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    bfs_visit[start] = true;
    bfs_res.push_back(start);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < vec[cur].size(); i++)
        {
            if (!bfs_visit[vec[cur][i]])
            {
                q.push(vec[cur][i]);
                bfs_visit[vec[cur][i]] = true;
                bfs_res.push_back(vec[cur][i]);
            }
        }
    }
}

int main()
{
    Init();
    int v; // 나머지는 함수에서 써야돼서 전역으로 선언함
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    // sort 꼭 해줘야됨(정점 작은거부터 방문이니까) => 매번 빼먹으니까 매우 주의
    for (int i = 1; i <= n; i++) // 1부터인거 조심(정점번호)
        sort(vec[i].begin(), vec[i].end());

    dfs(v);
    bfs(v);

    for (int i = 0; i < dfs_res.size(); i++)
        cout << dfs_res[i] << ' ';

    cout << endl;

    for (int i = 0; i < bfs_res.size(); i++)
        cout << bfs_res[i] << ' ';

    return 0;
}