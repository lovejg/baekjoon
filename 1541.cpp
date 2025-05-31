#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 참고(substr): "hello".substr(0,3) == "hel". 0이 시작점, 3은 길이
// 실제 수학식이라고 생각하고 풀지는 말자. minus가 true면 그냥 무조건 빼는거다(괄호 이런거 생각하지 말자). 이렇게 안하면 구현이 복잡함

int main()
{
    Init();
    string s;
    cin >> s;

    int idx = 0;
    int res = 0;
    bool minus = false;

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || i == s.length()) // 마지막 숫자값까지 계산하기 위해서 마지막 조건도 추가한거임
        {
            int temp = stoi(s.substr(idx, i - idx)); // 부등호 이전 숫자까지 뽑아내기
            if (minus)
                res -= temp;
            else
                res += temp;
            if (s[i] == '-')
                minus = true;
            idx = i + 1;
        }
    }

    cout << res << endl;
    return 0;
}