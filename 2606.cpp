#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

vector<int> v[101];
bool visit[101];
int res = 0;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// dfs로 풀긴 하는데, bfs로도 얼마든지 풀 수 있음. dfs 코드가 더 짧아서 dfs 쓴것뿐
void dfs(int k)
{
    visit[k] = true;
    res++;

    for (int i = 0; i < v[k].size(); i++)
        if (!visit[v[k][i]])
            dfs(v[k][i]);
}

// dfs 혹은 bfs 써서 푸는 대표적 문제 중 하나. dfs/bfs를 모르면
// https://velog.io/@tmakdrl/DFS%EC%99%80BFS%EC%97%90-%EB%8C%80%ED%95%B4-%EB%AA%A8%EB%A5%B4%EB%A9%B4-%EB%AC%B4%EC%A1%B0%EA%B1%B4-%EC%9D%B4%EA%B1%B0-%EB%B3%B4%EC%84%B8%EC%9A%94-dfs-bfs
// 위 링크로 가시오
int main()
{
    Init();
    int n;
    cin >> n;
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1); // 웜 바이러스는 1번 컴퓨터가 걸림

    cout << res - 1 << endl; // 1번 컴퓨터를 통해 걸리는 애들 구하는거라 1번은 빼야돼서 -1 해줌
    return 0;
}