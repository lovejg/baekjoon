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
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        int k;
        cin >> k;
        if (k == 1)
            continue;
        if (k == 2)
        {
            count++;
            continue;
        }
        int j;
        for (j = 2; j < k; j++)
            if (k % j == 0)
                break;
        if (j == k)
            count++;
    }
    cout << count << endl;
    return 0;
}