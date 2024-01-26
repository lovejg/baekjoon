#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector<int> v;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool search(int k)
{
    int left = 0;
    int right = v.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (k > v[mid])
            left = mid + 1;
        else if (k < v[mid])
            right = mid - 1;
        else
            return true;
    }
    return false;
}

int main()
{
    Init();
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        cout << search(k) << endl;
    }

    return 0;
}