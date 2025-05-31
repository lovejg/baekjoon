#include <iostream>
#include <queue>
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
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq; // priority queue인데, 작은 값이 우선(최소 힙)
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
                cout << 0 << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
            pq.push(x);
    }
    return 0;
}