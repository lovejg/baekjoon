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
    int count = 1;
    int cur = 1;
    int plus = 6;
    while (1)
    {
        if (N <= cur)
            break;
        else
        {
            cur += plus;
            plus += 6;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}