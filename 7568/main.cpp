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
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int i = 0; i < v.size(); i++)
    {
        int rank = 1;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                rank++;
        }
        cout << rank << endl;
    }
    return 0;
}