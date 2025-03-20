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
    int k;        // 어차피 최댓값 갱신만 할거라서 굳이 배열로 선언할 필요 x
    int max = -1; // 최댓값
    int idx = -1; // 최댓값의 순서(인덱스)

    for (int i = 0; i < 9; i++)
    {
        cin >> k;
        if (k > max) // 최댓값보다 크면
        {
            max = k;     // 최댓값과
            idx = i + 1; // 인덱스를 갱신(+1을 하는 이유는 인덱스, 즉 i는 0부터인데, 순서는 첫번째부터니까)
        }
    }

    cout << max << endl;
    cout << idx << endl;

    return 0;
}