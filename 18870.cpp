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

// upper_bound, lower_bound 관련해서 설명 좀 드림
// upper_bound는 나보다 큰 최초의 애의 위치를 반환, lower_bound는 나보다 크거나 같은 최초의 애의 위치를 반환
// 근데 그냥 이렇게 바로 쓰진 않고, 보통 v.begin()을 빼거나, v.end()에서 빼줌
// v.begin()을 빼면 앞에 몇개가 있는지(즉 인덱스). v.end()에서 빼주면 끝까지 몇개 남았는지
// lower_bound - v.begin(): 나보다 작은 값 개수
// upper_bound - v.begin(): 나보다 작거나 같은 값 개수
// v.end() - lower_bound: 나보다 크거나 같은 값 개수
// v.end() - upper_bound: 나보다 큰 값 개수

int main()
{
    Init();
    int n;
    cin >> n;

    vector<int> v;  // 정렬 및 중복 제거용
    vector<int> v2; // 정답 출력할때 사용할 용

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
        v2.push_back(k);
    }

    sort(v.begin(), v.end());                     // 정렬(lower_bound 쓰기 위해서)
    v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거(왜 해야되는지는 그 예제 입력 2 넣어보면 알 수 있음)

    for (int i = 0; i < n; i++)
        cout << lower_bound(v.begin(), v.end(), v2[i]) - v.begin() << ' '; // lower_bound가 나보다 크거나 같은애인데, v.begin()을 빼면 인덱스가 돼서 나보다 작은 애(반전된다고 생각해보자)

    cout << endl;

    return 0;
}