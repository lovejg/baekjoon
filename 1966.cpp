#include <iostream>
#include <queue>
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
    queue<pair<int, int>> q; // 인덱스, 값 pair(특정값이 몇번째 출력인지 맞추는 문제라 인덱스 정보도 필요해서 pair로 함)

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> v; // 값을 저장해서 정렬해놓고 최댓값 비교할 때 쓸 배열(이해 안돼도 아래 보면 이해될거임)
        int n, m;
        cin >> n >> m;

        int k;
        for (int j = 0; j < n; j++)
        {
            cin >> k;
            v.push_back(k); // 벡터에도 넣고
            q.push({j, k}); // 큐에는 인덱스, 값 pair로 넣기
        }

        sort(v.begin(), v.end()); // 벡터 정렬하기. 이러면 이제 맨 뒤(v[v.size()-1])가 우선순위 최댓값일거임

        int res = 1; // 몇번째 출력인지용 변수(정답)
        while (1)
        {
            pair<int, int> temp = q.front();    // q.front 자주 쓰니까 temp로 대충 선언해두기
            if (temp.second >= v[v.size() - 1]) // 만약에 우선순위 최댓값보다 크거나 같다면(사실 클 일은 없긴 할듯) => 출력해줘야 됨
            {
                if (temp.first == m) // 근데 만약에 우리가 찾고자 하는 목표값이라면
                {
                    cout << res << endl; // 그냥 순서 출력하고 끝
                    break;
                }
                else // 찾고자 하는 목표값이 아직 아니라면
                {
                    res++;        // 인쇄했다 치고 res 늘려주고
                    q.pop();      // 큐에서도 제거하고
                    v.pop_back(); // 벡터에서도 제거하기
                }
            }
            else // 더 작다면 => 인쇄 안하고 뒤로 재배치
            {
                q.pop();      // 뒤로 재배치 해야되니까 pop 하고
                q.push(temp); // 다시 push
            }
        }

        // 큐 다 썼으니까 비우기
        while (!q.empty())
            q.pop();
    }
    return 0;
}