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

int main()
{
    Init();
    int arr[26];
    for (int i = 0; i < 26; i++) // 모두 -1로 초기화
        arr[i] = -1;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (arr[s[i] - 'a'] == -1) // 'a'를 빼주면 그게 알파벳의 순서값이 됨
            arr[s[i] - 'a'] = i;
    }

    for (int i = 0; i < 26; i++)
        cout << arr[i] << ' ';

    cout << endl; // 이건 테스트 할 때 보기 편하라고 넣은거라 무시해도 됨

    return 0;
}