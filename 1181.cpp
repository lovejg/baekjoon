#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool comp(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    Init();
    int n;
    cin >> n;
    string s;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), comp);               // 사용자 지정 정렬 함수
    v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거 코드(반드시 정렬을 먼저 하고 unique를 써야됨)

    // 사실 꼭 이렇게 안하고 그냥 set이나 unordered_set 같은 거 쓰는 방법도 있음. 얘네는 중복제거가 디폴트기 때문. 근데 그냥 귀찮아서 하던대로 함

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    return 0;
}