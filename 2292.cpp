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
    int n;
    cin >> n;

    int end = 1;   // 각 층마다 끝값, 즉 가장 큰 값을 의미(7, 19, 37, ....)
    int count = 1; // 층수이자 결과값

    while (n > end) // n이 end보다 작아질때 끝남(즉 특정 층의 범위 안에 들어갈 때)
    {
        end += count * 6; // 이게 규칙임
        count++;          // 층 증가
    }

    cout << count << endl;
    return 0;
}