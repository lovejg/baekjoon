#include <iostream>
#include <map>
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

    map<int, int> mapp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        mapp[k]++; // map은 이렇게 크기 할당 없이 바로 접근 가능. 초기값은 0임
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        cout << mapp[k] << ' '; // 그냥 찾아서 출력하면 끝
    }

    cout << endl;
    return 0;
}