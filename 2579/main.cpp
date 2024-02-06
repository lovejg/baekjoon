#include <iostream>
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
    cin>>n;
    int arr[301];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    int dp[301];
    dp[0]=0;
    dp[1]=arr[1];

    for(int i=2;i<=n;i++)
    {
        dp[i]=max(dp[i-1], dp[i-2]);   
        dp[i]+=arr[i];
    }

    cout<<dp[n]<<endl;
    return 0;
}