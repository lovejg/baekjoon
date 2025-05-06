#include <iostream>
#include <string>
#include <stack>
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

    string str;
    stack<char> s;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        int j;
        for (j = 0; j < str.length(); j++)
        {
            if (str[j] == '(')
                s.push('(');
            else if (str[j] == ')') // 여는 소괄호랑 매칭이 돼야함(stack의 top과 비교)
            {
                if (s.empty()) // 아예 아무것도 없는데 닫는거부터 들어올수도 있는데, 이것도 VPC 아님
                    break;

                if (s.top() != '(') // 여는 소괄호가 아니면
                    break;          // 이것도 VPC아님
                else                // 여는 소괄호면
                    s.pop();        // 지금까지는 VPC 맞고, 소괄호 한세트 매칭 됐으니까 pop 하기
            }
        }

        if (j == str.length() && s.empty()) // 반복문 끝까지 잘 갔다면, 그리고 괄호들이 전부 잘 비워졌다면
            cout << "YES" << endl;
        else // 끝까지 못갔다면 중간에 VPC 아니라서 break 돼서 나온거일테니까
            cout << "NO" << endl;

        while (!s.empty())
            s.pop(); // 스택 다 썼으면 반드시 초기화 해주기
    }
    return 0;
}