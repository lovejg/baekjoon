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
    int repeat = 0;
    int i = 0;

    while (1)
    {
        while (s[i] != 'I') // I 찾기
            i++;

        if (i > m - 1) // 만약 인덱스가 문자열길이를 벗어나면
            break;     // 반복문 빠져나감

        if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') // 정상적으로 반복시
        {
            repeat++;
            i += 2; // 다음 I로 이동
        }
        else // 반복 안할시
        {
            if (repeat >= n)
                res += (repeat - n + 1);
            repeat = 0;
            i++;
        }
    }

    cout << res << endl;
    return 0;
}