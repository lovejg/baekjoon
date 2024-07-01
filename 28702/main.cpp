#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Fizz는 3의 배수
// Buzz는 5의 배수
int main()
{
    Init();
    string a, b, c;
    cin >> a >> b >> c;
    int k;
    if (c[0] >= '0' && c[0] <= '9')
    {
        k = stoi(c) + 1;
        if (k % 3 == 0 && k % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (k % 3 == 0)
            cout << "Fizz" << endl;
        else if (k % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << k << endl;
    }
    else if (b[0] >= '0' && b[0] <= '9')
    {
        k = stoi(b) + 2;
        if (k % 3 == 0 && k % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (k % 3 == 0)
            cout << "Fizz" << endl;
        else if (k % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << k << endl;
    }
    else // a가 숫자인 경우(3개 모두 숫자가 아닌 경우는 없음)
    {
        k = stoi(a) + 3;
        if (k % 3 == 0 && k % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (k % 3 == 0)
            cout << "Fizz" << endl;
        else if (k % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << k << endl;
    }
    return 0;
}