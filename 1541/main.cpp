#include <iostream>
#include <string>
#include <vector>
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
    string s;
    cin >> s;

    vector<int> num;   // 값을 저장
    vector<char> sign; // 해당 값에 맞는 부호를 저장(num이랑 짝을 맞춰서 저장)

    int idx = 0;
    int len = 0;
    char temp; // 부호 임시 저장 변수

    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0) // 첫 항은 따로 고려
        {
            if (s[i] == '-') // 첫항이 음수
            {
                temp = '-';
                idx++; // 부호는 숫자에 넣으면 안되니까
            }
            else // 첫항이 양수
            {
                temp = '+';
                len++; // 첫항이 양수면 s[0]도 숫자이므로 포함해야돼서
            }
        }
        else if (s[i] == '-' || s[i] == '+')
        {
            sign.push_back(temp);
            temp = s[i];
            num.push_back(stoi(s.substr(idx, len)));
            idx = i + 1;
            len = 0;
        }
        else
            len++;
    }

    // 마지막 항은 따로 처리
    sign.push_back(temp);
    num.push_back(stoi(s.substr(idx, len)));

    // - 다음에 +일 경우 묶기. 그니까 - 다음에 다시 -가 나오기 전까지 묶기
    int res = 0;
    int tempp = 0;
    bool minus = false;
    for (int i = 0; i < num.size(); i++)
    {
        if (sign[i] == '-')
        {
            if (minus)
            {
                res -= tempp;
                tempp = 0;
            }
            minus = true;
            tempp += num[i];
        }
        else // 양수
        {
            if (minus)
                tempp += num[i];
            else
                res += num[i];
        }
    }
    res -= tempp; // 잔여 값들 모두 처리

    cout << res << endl;
    return 0;
}