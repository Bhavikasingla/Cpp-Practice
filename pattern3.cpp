#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin>>n;
	for(i=n; i>=1; i--)
	{
		for(j=n; j>=i; j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
/*
4321
432
43
4
*/