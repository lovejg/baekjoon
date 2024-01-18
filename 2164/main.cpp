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
    queue<int> q;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
        q.push(i);
    while (!q.empty())
    {
        if (q.size() == 1)
            break;
        q.pop();
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    cout << q.front() << endl; // rear 해도 상관없음(어차피 하나라서)
    return 0;
}