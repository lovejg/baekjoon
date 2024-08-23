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

bool comp(pair<int, int> a, pair<int, int> b) // 사용자 지정 함수 반환형은 bool
{
    if (a.second != b.second)       // 종료시간이 다르면
        return a.second < b.second; // 종료시간 오름차순
    else                            // 종료시간이 같으면
        return a.first < b.first;   // 시작시간 오름차순

    // 종료시간이 같을때 시작시간 오름차순으로 해주는 이유는
    // 가령 10~10과 9~10이 있다고 할 때 시작시간이 더 작은 9~10을 선택했을때
    // 9~10 다음에 바로 10~10을 또 선택해줄 수 있기 때문이다(그러니까 하나라도 수업을 늘리기 위해서)
}

int main()
{
    Init();
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), comp); // 사용자 지정 함수로 sorting

    int res = 1;
    int i = 0;
    int end = v[0].second;

    while (1)
    {
        int j;
        // 다음 수업 찾기
        for (j = i + 1; j < n; j++)
        {
            if (v[j].second >= end && i != j)
            {
                i = j;
                end = v[i].second;
                res++;
                break;
            }
        }
        if (j == n - 1) // 더 이상 볼 수업 없음
            break;
    }

    cout << res << endl;
    return 0;
}