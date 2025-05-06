#include <iostream>
#include <queue>
#include <string>
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
    queue<int> q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int k;
            cin >> k;
            q.push(k);
        }
        else if (str == "pop")
        {
            if (q.empty())
                cout << -1 << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (str == "size")
            cout << q.size() << endl;
        else if (str == "empty")
            cout << q.empty() << endl;
        else if (str == "front")
        {
            if (q.empty())
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        else if (str == "back")
        {
            if (q.empty())
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
    }

    return 0;
}