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
    int N;
    cin >> N;

    int k;
    int max = -1;
    int min = -1;
    cin >> k;
    max = min = k;

    for (int i = 1; i < N; i++)
    {
        cin >> k;
        if (max < k)
            max = k;
        else if (min > k)
            min = k;
    }
    cout << min << ' ' << max << endl;
    return 0;
}