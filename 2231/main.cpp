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
    int N;
    cin >> N;
    int i;
    for (i = 1; i < N; i++)
    {
        int sum = i;
        int temp = i;
        while (1)
        {
            sum += temp % 10;
            if (temp / 10 == 0)
                break;
            temp /= 10;
        }
        if (sum == N)
            break;
    }
    if (i == N)
        cout << 0 << endl;
    else
        cout << i << endl;
    return 0;
}