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

bool check(int k) // 심심해서 소수판정함수 만들어봄
{
    if (k == 1) // 1은 예외임
        return false;

    for (int i = 2; i < k; i++) // 1과 자기자신을 제외한 애들중에서
        if (k % i == 0)         // 나누어떨어지는 애가 있으면
            return false;       // 소수 아니니까 false 반환

    return true; // 위 반복문을 곱게 지나치고 여기까지 왔으면 나누어떨어진애 없는거니까, 즉 소수니까 true 반환
}

int main()
{
    Init();
    vector<int> v(101); // 이렇게 미리 크기 할당을 해주면
    int n;
    int res = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i]; // 이렇게 입력을 좀 더 편하게 할 수 있음

    for (int i = 0; i < n; i++)
        if (check(v[i])) // 판정함수에서 true 나오면, 즉 소수면
            res++;       // 결과값에 더해주기

    cout << res << endl;

    return 0;
}