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
    int a, b, v;
    cin >> a >> b >> v;
    int day = 1;
    if ((v - a) % (a - b) == 0)
        day = (v - a) / (a - b);
    else
        day = (v - a) / (a - b) + 1;
    cout << day + 1 << endl;
    return 0;
}