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
	int H,M;
	cin>>H>>M;

	if(M>=45)
		M-=45;
	else if(M<45)
	{
		M+=15;
		if(H==0)
			H=23;
		else
			H--;
	}
	
	cout<<H<<' '<<M<<endl;
	return 0;
}