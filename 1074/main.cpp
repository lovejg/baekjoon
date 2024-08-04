#include <iostream>
#include <cmath>
#define endl '\n'
using namespace std;

int n, r, c;
int res = 0;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void visit(int len, int curr, int curc)
{
    if (len == 2)
    {
        if (curr == r && curc + 1 == c)
            res++;
        else if (curr + 1 == r && curc == c)
            res += 2;
        else if (curr + 1 == r && curc + 1 == c)
            res += 3;
        return;
    }

    if (r < curr + len / 2 && c < curc + len / 2)
    {
        visit(len / 2, curr, curc);
    }
    else if (r < curr + len / 2 && c >= curc + len / 2)
    {
        res += pow(len / 2, 2);
        visit(len / 2, curr, curc + len / 2);
    }
    else if (r >= curr + len / 2 && c < curc + len / 2)
    {
        res += 2 * pow(len / 2, 2);
        visit(len / 2, curr + len / 2, curc);
    }
    else if (r >= curr + len / 2 && c >= curc + len / 2)
    {
        res += 3 * pow(len / 2, 2);
        visit(len / 2, curr + len / 2, curc + len / 2);
    }
}

int main()
{
    Init();
    cin >> n >> r >> c;
    visit(pow(2, n), 0, 0);

    cout << res << endl;
    return 0;
}