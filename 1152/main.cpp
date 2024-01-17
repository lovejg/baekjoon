#include <iostream>
#include <string>
#define endl '\n' // 시간단축
using namespace std;

void Init() // 시간 단축
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    int k = 0;
    char s[1000001];
    cin.getline(s, 1000001); // 공백 포함해야 하므로
    int i = 0;
    while (s[i] != '\0') // 끝까지
    {
        if (s[i] == ' ')
            k++;
        i++;
    }
    if (s[0] == ' ') // 처음부터 공백 나오는 경우
        k--;
    if (s[i - 1] == ' ') // 마지막에 공백으로 끝나는 경우
        k--;
    cout << k + 1 << endl; // 단어=공백+1
    return 0;
}