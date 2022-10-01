#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
/*
1234
234
34
4
*/