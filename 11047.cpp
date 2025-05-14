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
    int n, k;
    cin >> n >> k;

    vector<int> v;

    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == k) // 한개로 끝내기 가능
        {
            cout << 1 << endl;
            return 0;
        }
        else if (input < k) // 만약에 k보다 크면 걔는 그냥 필요 없는 동전
            v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<int>()); // 내림차순 정렬

    int i = 0;
    int res = 0;
    while (k > 0)
    {
        while (k >= v[i]) // 0부터, 즉 값이 큰 동전부터 최대한 빼기(그리디 알고리즘 느낌)
        {
            k -= v[i];
            res++;
        }
        i++;
    }

    cout << res << endl;

    return 0;
}