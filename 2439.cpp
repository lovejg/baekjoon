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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // 공백 출력
            cout << ' ';
        for (int j = n - i - 1; j < n; j++) // 별 출력(남은 칸)
            cout << '*';
        cout << endl;
    }
    return 0;
}