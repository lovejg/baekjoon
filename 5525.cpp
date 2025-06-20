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
    int n, m;
    char s[1000002];

    cin >> n >> m >> s;

    int res = 0;
    int ptr = 0;
    int repeat = 0; // 반복 횟수 체크용

    while (1)
    {
        while (s[ptr] != 'I') // IOI가 시작이 결국 I니까 I 찾기(이게 은근 킥인게, 이렇게 안하면 시간 초과 날지도?)
            ptr++;

        if (ptr > m - 1) // 인덱스니까 -1 고려
            break;

        if (s[ptr] == 'I' && s[ptr + 1] == 'O' && s[ptr + 2] == 'I') // 정상적인 반복
        {
            repeat++;
            ptr += 2; // 다음 I로 이동
        }
        else
        {
            if (repeat >= n) // 이러면 만족
                res += (repeat - n + 1);
            repeat = 0;
            ptr++;
        }
    }

    cout << res << endl;

    return 0;
}