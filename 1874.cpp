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

    vector<int> v;
    vector<char> res;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    bool ch = true;

    // 초기값 설정
    int count = 1; // 1부터 순차적으로 push할 숫자

    // 직접 메모장에 써보면서 하는걸 추천
    for (int i = 0; i < n; i++)
    {
        // 일단 목표값까지 push
        while (count <= v[i])
        {
            s.push(count++);
            res.push_back('+');
        }

        // 목표값에 도달하면 pop
        if (s.top() == v[i])
        {
            s.pop();
            res.push_back('-');
        }
        else // 예외의 경우 => 잘못된거임
        {
            ch = false;
            break;
        }
    }

    if (!ch)
        cout << "NO" << endl;
    else
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << endl;

    return 0;
}