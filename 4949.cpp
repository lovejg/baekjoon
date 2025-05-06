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

    string str;
    stack<char> s;

    while (1)
    {
        getline(cin, str);
        if (str[0] == '.' && str.length() == 1)
            break;

        int i;
        for (i = 0; str[i] != '.'; i++)
        {
            if (str[i] == '(')
                s.push('(');
            else if (str[i] == '[')
                s.push('[');
            else if (str[i] == ')') // 여는 소괄호랑 매칭이 돼야함(stack의 top과 비교)
            {
                if (s.empty()) // 아예 아무것도 없는데 닫는거부터 들어올수도 있는데, 이것도 균형 깨진거임
                    break;

                if (s.top() != '(') // 여는 소괄호가 아니면
                    break;          // 균형 안 잡힌거임
                else                // 여는 소괄호면
                    s.pop();        // 균형 잘 잡힌거고, 소괄호 한세트 매칭 됐으니까 pop 하기
            }
            else if (str[i] == ']') // 여는 대괄호랑 매칭이 돼야함(stack의 top과 비교)
            {
                if (s.empty()) // 아예 아무것도 없는데 닫는거부터 들어올수도 있는데, 이것도 균형 깨진거임
                    break;

                if (s.top() != '[') // 여는 대괄호가 아니면
                    break;          // 균형 안 잡힌거임
                else                // 여는 대괄호면
                    s.pop();        // 균형 잘 잡힌거고, 대괄호 한세트 매칭 됐으니까 pop 하기
            }
        }

        if (str[i] == '.' && s.empty()) // 반복문 끝까지 잘 갔다면, 그리고 괄호들이 전부 잘 비워졌다면
            cout << "yes" << endl;
        else // 끝까지 못갔다면 중간에 균형 안잡혀서 break 돼서 나온거일테니까
            cout << "no" << endl;

        while (!s.empty())
            s.pop(); // 스택 다 썼으면 반드시 초기화 해주기
    }
    return 0;
}