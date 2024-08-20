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
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int check[10] = {0}; // 탕후루에 꽂혀있는 과일 체크
    int left = 0;        // 투포인터를 위한 left
    int right = 0;       // 투포인터를 위한 right
    int type = 0;        // 탕후루에 꽂혀있는 과일 종류
    int res = 0;         // 답(과일 개수)

    while (right < n) // 끝까지 탐방
    {
        if (check[v[right]] == 0) // 과일 한개도 없다면
            type++;               // 새로 종류 추가
        check[v[right]]++;        // 과일도 추가
        right++;                  // 다음 과일로 넘어가기

        if (type > 2) // 종류는 최대 두개니까 두개 넘어가면
        {
            // 시작을 한칸 오른쪽으로 넘기고 기존 시작 과일 롤백하기
            check[v[left]]--;
            if (check[v[left]] == 0)
                type--;
            left++;
        }

        res = max(res, right - left); // 현재 탕후루에 꽂혀있는 과일 개수 최신화(최댓값일 경우 갱신)
    }

    cout << res << endl;
    return 0;
}