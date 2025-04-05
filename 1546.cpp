#include <iostream>
#include <algorithm>
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
    int arr[1001];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n); // 정렬해서
    int m = arr[n - 1]; // 최댓값 얻기(갱신식으로 해도 되는데 귀찮음)

    double total = 0.0; // total 값은 double로
    for (int i = 0; i < n; i++)
        total += (double)arr[i] / m * 100.0; // 이 부분은 아래 주석 보자

    cout << total / n << endl;

    // 왜 어디서는 double로 안바꿔줌??? 예를 들어서 그 100.0 곱하는 부분에서의 m이나 마지막 출력할 때 n 같은거??
    // 왜냐면 int랑 double이랑 같이 연산되면, double로 자동 형변환이 되기 때문이다!! 이거는 기본 지식이니 꼭 알아둡시데이

    // 두번째 궁금증. 위 말이 맞다 치면 arr[i]/m에서 (double) 뭐하러 붙임? 어차피 100.0이 double이라 형변환 될텐데? ㅋㅋ 이새끼 알못이네
    // 자 아닙니다~ 깔끔히 예시 들어드립니다. arr[i]가 40이고 m이 50이라 칩시다. 그러면 80 나와야 되죠?
    // 근데 (double) 없으면 40/50이 int 계산에서는 0 돼버림.. 그래서 0*100.0이 돼서 결국 0임
    // 다만 그럼 (double)arr[i]/m이 형변환에 의해 double이 되니까 100.0 대신에 100 써도 되긴 함. 근데 그냥 실수 연산인거 보여주는 느낌으로 100.0 씀

    // 결론적으로 생각할건 일단 int와 double 연산시 자동 형변환 된다는거, 근데 이거 믿고 int끼리 연산하다가 자칫하면 값이 통으로 날라가니 신경쓰면서 해야 됨
    return 0;
}