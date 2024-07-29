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
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            if (q.empty())
                cout << 0 << endl;
            else
            {
                cout << q.top() << endl;
                q.pop();
            }
        }
        else
            q.push(x);
    }
    return 0;
}