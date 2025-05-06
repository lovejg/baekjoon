#include <iostream>
#include <stack>
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

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        if (k != 0)    // 0 아니면
            s.push(k); // 스택에 추가하고
        else           // 0이면
            s.pop();   // pop
    }

    int res = 0;
    // 스택에 남은 값 다 더하기
    while (!s.empty())
    {
        res += s.top();
        s.pop();
    }

    cout << res << endl;
    return 0;
}