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
    int a, b, c;
    cin >> a >> b >> c;

    int k = a * b * c;
    string s = to_string(k); // 탐색 위해서 문자열로 바꾸기

    int arr[10] = {
        0,
    }; // 프리티어 쓰니까 자꾸 이따구로 정렬돼서 빡침

    for (int i = 0; i < 10; i++)
        arr[s[i] - '0']++; // 가령 5면 arr[5]를 ++ 하는거임

    for (int i = 0; i < 10; i++)
        cout << arr[i] << endl;

    return 0;
}