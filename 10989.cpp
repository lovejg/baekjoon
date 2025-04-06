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
    int n;
    cin >> n;

    int arr[10001] = {
        0,
    }; // 자연수 배열
    int max = 0;

    // 나오는 값 arr에서 ++해주고, 최댓값 구하기
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[k]++;
        if (k > max)
            max = k;
    }

    for (int i = 1; i <= max; i++)       // 최댓값까지만 반복문 돌리기(그 뒤는 어차피 안나오니까 의미없음)
        for (int j = 0; j < arr[i]; j++) // 똑같은 값이 여러개 입력될수도 있으니까 if문이 아니라 for문으로 해주기
            cout << i << endl;

    return 0;
}