#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int n, m;
vector<int> v[101];
vector<int> res;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Init();
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    return 0;
}