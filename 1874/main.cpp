#include <iostream>
#include <stack>
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
    stack<int> s;
    vector<char> v;
    int n;
    cin>>n;
    int input;
    int count=1;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        while(count<=input)
        {
            s.push(count++);
            v.push_back('+');
        }
        if(s.top()==input)
        {
            s.pop();
            v.push_back('-');
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}