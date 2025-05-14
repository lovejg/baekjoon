#include <iostream>
#include <set>
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
    set<int> s;

    // 이 부분이 아마 이 문제의 킥일거임(밑에 가벼운 설명 있음)
    set<int> s2;
    for (int i = 1; i <= 20; i++)
        s2.insert(i);

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string str;
        int k;
        cin >> str;
        if (str == "add")
        {
            cin >> k;
            s.insert(k); // 어차피 이미 있으면 추가 안됨(set은 중복을 참지 않음)
        }
        else if (str == "remove")
        {
            cin >> k;
            s.erase(k); // erase특: 어차피 없으면 제거 안됨
        }
        else if (str == "check")
        {
            cin >> k;
            if (s.count(k) == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else if (str == "toggle")
        {
            cin >> k;
            if (s.count(k) == 0)
                s.insert(k);
            else
                s.erase(k);
        }
        else if (str == "all")
        {
            s = s2; // 만약에 all이 여러번 나오면 다 지우고 1~20 추가를 여러번 하는거라서 시간초과가 나서 이렇게 해야됨
        }
        else if (str == "empty")
        {
            s.clear();
        }
    }
    return 0;
}