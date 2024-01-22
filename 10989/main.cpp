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
    int arr[10001] = {
        0,
    };
    int N;
    cin >> N;
    int k;
    int max = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> k;
        arr[k]++;
        if (max < k)
            max = k;
    }

    for (int i = 1; i <= max; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << endl;

    return 0;
}