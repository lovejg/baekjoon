#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int n, m, v; // 순서대로 정점 개수, 간선 개수, 시작 정점
vector<int> vec[1001];
bool visit[1001];
vector<int> bfs_ans;
vector<int> dfs_ans;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs()
{
}

void dfs()
{
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
    return 0;
}