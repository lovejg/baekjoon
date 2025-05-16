#include <iostream>
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

    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    vector<int> sum;
    sum.push_back(v[0]);

    for (int i = 1; i < v.size(); i++)
        sum.push_back(sum[i - 1] + v[i]); // 이렇게 해당 인덱스까지의 값의 합을 쭉 누적시킴(누적 합)

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << sum[b - 1] - sum[a - 2] << endl; // 인덱스는 0부터 시작이고, 입력은 1부터 시작임을 고려해서 1씩 더 빼기
    }
    return 0;
}