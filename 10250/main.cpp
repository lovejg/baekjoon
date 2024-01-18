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
    int h, w, n;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> h >> w >> n;
        int a = n / h;
        int b = n % h;

        int sum = (a + 1);
        sum += (b * 100);
        cout << sum << endl;
    }
    return 0;
}