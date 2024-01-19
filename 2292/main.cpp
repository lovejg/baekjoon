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
    int cur = 1;
    while (1)
    {
        if (N <= cur)
            break;
        else
        {
            cur += 4;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

// 1 7 19 37 61
// 6 12 18 24