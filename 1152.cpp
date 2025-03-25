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
    char s[1000001];
    cin.getline(s, 1000001); // 이걸 쓸 줄 알아야됨(공백까지 받는거)

    int res = 1; // 단어개수는 공백 + 1이니까 1 시작
    int i = 0;
    while (s[i] != '\0') // 끝나기 전까지 진행
    {
        if (s[i] == ' ') // 공백 찾을때마다
            res++;
        i++;
    }

    if (s[0] == ' ')     // 처음이 공백이면
        res--;           // 해당 공백은 무시
    if (s[i - 1] == ' ') // 마지막이 공백이면
        res--;           // 해당 공백은 무시

    cout << res << endl;
    return 0;
}