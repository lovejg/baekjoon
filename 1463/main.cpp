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
    int arr[1000001];

    arr[1] = 0; // 초기값
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0)
            arr[i] = min(arr[i / 3] + 1, arr[i]);
        if (i % 2 == 0)
            arr[i] = min(arr[i / 2] + 1, arr[i]);
    }

    cout << arr[n] << endl;
    return 0;
}