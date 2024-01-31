#include <iostream>
#include <algorithm>
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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <= count; j++)
            sum += v[j];
        count++;
    }

    cout << sum << endl;
    return 0;
}