#include <iostream>
#include <vector>
#include <algorithm>
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
    int a, b, c;

    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        // 빗변, 즉 가장 긴 애를 구해야 되는데, 갱신하는 식으로 하는게 귀찮으니까 그냥 벡터 만들고
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end()); // sort 해버리기. 이러면 v[2]가 빗변(제일 긴 애)이 됨

        if (v[2] * v[2] == (v[0] * v[0] + v[1] * v[1])) // 피타고라스 정리 식 그대로
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}