#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

vector<int> v[101];
bool visit[101];

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dfs(int n)
{
    visit[n] = true;
    for (int i = 0; i < v[n].size(); i++)
        if (!visit[v[n][i]])
            dfs(v[n][i]);
}

int main()
{
    Init();
    int n;
    cin >> n;
    int k;
    cin >> k;
    for (int i = 1; i <= n; i++)
        visit[i] = false;

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1); // 1번 컴퓨터가 걸렸을때니까

    int count = 0;
    for (int i = 2; i <= n; i++)
        if (visit[i])
            count++;

    cout << count << endl;
    return 0;
}