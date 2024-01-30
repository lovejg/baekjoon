#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Init();
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, m;
        cin >> n >> m;
        queue<pair<int, int>> q;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            v.push_back(k);
            q.push({j, k});
        }
        sort(v.begin(), v.end());

        int count = 1;
        while (1)
        {
            if (q.front().second < v[v.size() - 1])
            {
                q.push(q.front());
                q.pop();
            }
            else
            {
                if (q.front().first == m)
                {
                    cout << count << endl;
                    break;
                }
                else
                {
                    q.pop();
                    v.pop_back();
                    count++;
                }
            }
        }
    }
    return 0;
}