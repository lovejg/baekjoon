#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

vector<int> v[10000];
bool visit[10000];

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool dfs(int k)
{
    if (visit[k])
        return false;
    visit[k] = true;

    for (int i = 0; i < v[k].size(); i++)
    {
        if (!visit[v[k][i]])
            dfs(v[k][i]);
    }

    return true;
}

int main()
{
    Init();
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dfs(i))
            res++;
    }

    cout << res << endl;

    return 0;
}