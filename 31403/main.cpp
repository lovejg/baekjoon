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
    int a, b, c;
    cin >> a >> b >> c;

    int ten = 0;
    if (b < 10)
        ten = 10;
    else if (b < 100)
        ten = 100;
    else if (b < 1000)
        ten = 1000;
    else
        ten = 10000;

    cout << a + b - c << endl;
    cout << ten * a + b - c << endl;

    return 0;
}