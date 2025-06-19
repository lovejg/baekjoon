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

// 슬라이딩 윈도우라는 애를 써서 풀거임
// 투 포인터라는 애가 있는데 그거의 일종임
// left, right 포인터를 준비하고, 조금씩 이동하면서 검사하는 그런 느낌
// 자세한건 귀찮으니 아래 코드 참고하고, gpt한테 질문 ㄱㄱ
int main()
{
    Init();
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    int check[10] = {0}; // 종류 셀 때 쓸거임(과일이 1~9로 총 9종류임을 고려)
    int left = 0;        // left 포인터
    int right = 0;       // right 포인터
    int res = 0;
    int type = 0; // 과일 종류

    while (right < n)
    {
        if (check[v[right]] == 0) // 지금까지 윈도우에 오른쪽 끝 과일이 하나도 없었음
            type++;               // 종류 증가(새로운 종류의 과일이 들어온거니까)
        check[v[right]]++;        // 해당 과일 check++
        right++;                  // 윈도우 오른쪽 끝 한칸 이동(오른쪽으로)

        if (type > 2) // 2종류 초과
        {
            check[v[left]]--;        // 왼쪽 옮기기 전에 check-- 해주고
            if (check[v[left]] == 0) // 0 됐다는건 이제 윈도우에 왼쪽 끝 과일 없다는거니까
                type--;              // 종류 감소
            left++;                  // 윈도우 왼쪽 끝 한칸 이동(오른쪽으로)
        }

        res = max(res, right - left); // 과일 개수 갱신
    }
    cout << res << endl;

    return 0;
}