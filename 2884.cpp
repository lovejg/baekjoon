#include <iostream>
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
    int h, m;
    cin >> h >> m;

    if (m >= 45) // 분이 45분보다 높으면
        m -= 45; // 그냥 분만 45분 빼면 끝
    else
    {
        if (h == 0) // 만약에 0시면
            h = 23; // 23시로 바뀌어야함(-1시는 없음..)
        else        // 그게 아닌 일반적인 경우에서는
            h--;    // 한시간 빼고
        m += 15;    // 분은 역으로 15분 늘리기
    }

    cout << h << ' ' << m << endl;
    return 0;
}