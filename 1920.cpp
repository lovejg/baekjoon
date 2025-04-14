#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector<int> v; // 함수에서도 쓸거라서 전역으로 선언

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool bs(int target) // 이진 탐색 함수
{
    int left = 0;
    int right = v.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (v[mid] == target)
            return true;
        else if (v[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

// 일단 n과 m이 최대 100000이라서 브루트포스로 하면 10^10이니까 1초는 커녕 1년은 걸리게 생겼음. 그래서 다른 방법을 찾아야 됨
// 그게 바로 이진 탐색(binary search)
// 보통 이게 어디에 있나? 이런 문제들은 이진 탐색 아니면 해시 씀(내 나름의 팁인데 무조건 맞지는 않을지도 ㅋㅋ)
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

    sort(v.begin(), v.end()); // 이진 탐색 쓰려면 일단 sort가 무조건 돼 있어야 합니데이

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int target;
        cin >> target;
        cout << bs(target) << endl;
    }

    return 0;
}