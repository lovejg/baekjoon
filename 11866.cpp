#include <iostream>
#include <queue>
#include <vector>
#define endl '\n'
using namespace std;

queue<int> q;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void cal(int repeat) // k-1명 내리는 함수
{
    for (int i = 0; i < repeat; i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

// 논리: k-1명 내리고, 한명 버리고를 무한 반복
int main()
{
    Init();
    vector<int> res; // 정답 담을 배열(출력형식이 귀찮게 돼있어서 이렇게 해야됨)

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (!q.empty())
    {
        cal(k - 1);               // k-1명 내리기 완료
        res.push_back(q.front()); // 버릴 한명 정답 벡터에 추가
        q.pop();                  // 버리기
    }

    // 출력형식 지켜서 출력
    cout << '<';
    for (int i = 0; i < res.size() - 1; i++)
        cout << res[i] << ", ";

    cout << res[res.size() - 1] << '>' << endl;

    return 0;
}