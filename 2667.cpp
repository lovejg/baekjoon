#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int n;
char arr[26][26];
bool visit[26][26];
vector<int> res;
int dirr[4] = {-1, 1, 0, 0};
int dirc[4] = {0, 0, -1, 1};

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int row, int col)
{
    queue<pair<int, int>> q;
    q.push({row, col});
    visit[row][col] = true;
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
            if (nextr >= 0 && nextr < n && nextc >= 0 && nextc < n && !visit[nextr][nextc] && arr[nextr][nextc] == '1') // 범위 내, 방문 x, 집이 있는 곳(1) 조건 모두 만족 시
            {
                visit[nextr][nextc] = true;
                q.push({nextr, nextc});
                count++;
            }
        }
    }

    res.push_back(count); // bfs 다 끝나면 count 추가
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

    sort(res.begin(), res.end());

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;

    return 0;
}