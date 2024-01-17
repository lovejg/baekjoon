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
	int a;
	bool ch[42];

	for(int i=0;i<42;i++)
		ch[i]=false;
	
	for(int i=0;i<10;i++)
	{
		cin>>a;
		ch[a%42]=true;
	}

	int count=0;
	for(int i=0;i<42;i++)
		if(ch[i])
			count++;
	
	cout<<count<<endl;
	return 0;
}