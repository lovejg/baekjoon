#include <iostream>
#define endl '\n'
using namespace std;

int n, m;
int arr[101][101]; // 플로이드-워셜은 웬만하면 vector보단 배열 쓰기(INF 초기화 때문에)
int INF = 1e9;     // 가장 큰 int 값(infinity라고 가정)

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void fw() // 플로이드 워셜 함수(거리 최신화 해주는 함수)
{
    for (int k = 1; k <= n; k++) // * 플로이드 워셜의 핵심: 정점 k를 추가(중간지점 정점이라고 생각하면 됨. 즉 k를 거쳐가는 경로)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)        // 자기자신은
                    arr[i][j] = 0; // 거리 0
                else
                    arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]); // 그냥 가는거랑 중간지점 k 거쳐 가는거랑 비교해서 더 작은거 선택
            }
        }
    }
}

int main()
{
    Init();
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            arr[i][j] = INF; // 일단 전부 무한대로 초기화하고 시작(자기자신은 0으로 초기화해야되는데, 이건 fw에서 함)

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1; // 연결된 경우 거리는 1
    }

    fw(); // 거리 최신화(arr 최신화)

    // fw 통해 거리 최신화 마친 뒤에 답 구하기
    int bacon = 0;
    int min = INF;
    int res;

    for (int i = 1; i <= n; i++)
    {
        bacon = 0;
        for (int j = 1; j <= n; j++)
            bacon += arr[i][j];
        if (bacon < min)
        {
            min = bacon;
            res = i;
        }
    }

    cout << res << endl;

    return 0;
}