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
    string s;
    cin >> s;
    int arr[26];
    for (int i = 0; i < 26; i++)
        arr[i] = -1;

    for (int i = 0; i < s.length(); i++)
        if (arr[s[i] - 'a'] == -1)
            arr[s[i] - 'a'] = i;

    for (int i = 0; i < 26; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}