#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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

    if (n == 0) // 간단한 예외처리
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    int h = round(n * 0.15); // round는 반올림 함수

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = h; i < v.size() - h; i++) // 위아래 15%씩 자르고 계산
        sum += v[i];

    n -= 2 * h; // 위아래 15%씩 자르고 계산

    cout << round(double(sum) / double(n)) << endl;
    return 0;
}