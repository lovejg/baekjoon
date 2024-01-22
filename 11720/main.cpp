#include <iostream>
#include <string>
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
    int N;
    cin >> N;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');
    cout << sum << endl;
    return 0;
}