#include <iostream>
#include <stack>
#include <vector>
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
    vector<char> v;

    bool ch = false;
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        while (start <= k)
        {
            s.push(start++);
            v.push_back('+');
        }
        if (s.top() == k)
        {
            s.pop();
            v.push_back('-');
        }
        else
        {
            cout << "NO" << endl;
            ch = true;
            break;
        }
    }

    if (!ch)
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << endl;
    return 0;
}