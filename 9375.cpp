#include <iostream>
#include <string>
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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        map<string, int> mapp;
        for (int j = 0; j < k; j++)
        {
            string a, b;
            cin >> a >> b;
            mapp[b]++; // map 초기값은 전부 0임을 고려
        }
        int res = 1;

        // 식이 왜 아래와 같은지는 생각해보고, 직접 해보면 알 수 있음
        for (auto it = mapp.begin(); it != mapp.end(); it++) // key가 string이라서 그냥 auto 사용함
            res *= (it->second + 1);
        cout << res - 1 << endl;
    }
    return 0;
}