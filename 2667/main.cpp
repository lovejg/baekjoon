#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define endl '\n'
using namespace std;

int n;
char arr[26][26];
bool visit[26][26];
vector<int> v;
int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int startr, int startc)
{
    queue<pair<int, int>> q;
    q.push({startr, startc});
    visit[startr][startc] = true;
    int count = 1; // 자기 자신도 포함

    while (!q.empty())
    {
        int curr = q.front().first;
        int curc = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nextr = curr + dirr[i];
            int nextc = curc + dirc[i];

            if (nextr >= 0 && nextc >= 0 && nextr < n && nextc < n && arr[nextr][nextc] == '1' && !visit[nextr][nextc])
            {
                count++;
                visit[nextr][nextc] = true;
                q.push({nextr, nextc});
            }
        }
    }

    v.push_back(count);
}

int main()
{
    Init();
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][j] == '1' && !visit[i][j])
                bfs(i, j);

    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}