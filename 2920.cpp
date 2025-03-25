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
    int arr[8];
    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    bool check = false;
    int i = 0;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] + 1 == arr[i + 1]) // 오름차순
            check = true;
        else if (arr[i] - 1 == arr[i + 1]) // 내림차순
            check = false;
        else // 중간에 한번이라도 삑나면 끝
            break;
    }

    if (i == 7) // 안 삑나고 끝까지 잘 돌았으면 오름차순이나 내림차순
    {
        if (check)
            cout << "ascending" << endl;
        else
            cout << "descending" << endl;
    }
    else // 삑남 ㅋㅋ
        cout << "mixed" << endl;
    return 0;
}