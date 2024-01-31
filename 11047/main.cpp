#include <iostream>
#include <vector>
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
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        if (h <= k)
            v.push_back(h);
    }

    int count = 0;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        while (k >= v[i])
        {
            k -= v[i];
            count++;
        }
        if (k == 0)
            break;
    }

    cout << count << endl;
    return 0;
}