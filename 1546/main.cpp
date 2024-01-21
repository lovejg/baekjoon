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
	int N;
	cin >> N;
	int arr[1000];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);
	int max = arr[N - 1];
	double sum = 0.0;
	for (int i = 0; i < N; i++)
		sum += (double)arr[i] / max * 100.0; //(double)arr[i]/max와 (double)(arr[i]/max)의 차이를 잘 생각해보자
	sum /= N;

	cout << sum << endl;
	return 0;
}