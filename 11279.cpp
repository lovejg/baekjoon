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
    priority_queue<int> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 0)
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
            pq.push(k);
    }
    return 0;
}