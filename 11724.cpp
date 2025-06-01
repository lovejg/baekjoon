#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

vector<int> graph[10000];
bool visit[10000];

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dfs(int n)
{
    visit[n] = true;

    for (int i = 0; i < graph[n].size(); i++)
        if (!visit[graph[n][i]])
            dfs(graph[n][i]);
}

int main()
{
    Init();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visit[i]) // 방문 안한 곳에 대해서만 dfs(연결된 애들도 어차피 dfs 함수때문에 방문처리됨)
        {
            dfs(i);
            res++;
        }
    }

    cout << res << endl;
    return 0;
}