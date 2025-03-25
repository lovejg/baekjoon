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
    int arr[42] = {
        0,
    }; // 나머지 배열

    int res = 0;
    int k;

    for (int i = 0; i < 10; i++)
    {
        cin >> k;
        arr[k % 42]++; // 가령 나머지가 3이면 arr[3]이 1 증가하는거임
    }

    for (int i = 0; i < 42; i++)
        if (arr[i] != 0) // 0이 아니면 그 나머지값이 나온 적 있는거니까
            res++;       // 결과값++

    cout << res << endl;
    return 0;
}