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
    int al[25] = {
        0,
    };
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            al[s[i] - 'a']++;
        else
            al[s[i] - 'A']++;
    }

    int max = -1;
    int idx = -1;
    bool dup = false;
    for (int i = 0; i <= 25; i++)
    {
        if (al[i] > max)
        {
            max = al[i];
            idx = i;
            dup = false;
        }
        else if (al[i] == max)
            dup = true;
    }

    if (dup)
        cout << '?' << endl;
    else
        cout << (char)(idx + 'A') << endl;

    return 0;
}