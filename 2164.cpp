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

    queue<int> q;

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (q.size() > 1)
    {
        q.pop();
        int k = q.front();
        q.pop();
        q.push(k);
    }

    cout << q.front() << endl;

    return 0;
}