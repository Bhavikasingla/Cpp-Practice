#include<iostream>
using namespace std;
int main()
{
	int i, j, n, k;
	cin>>n;
	k==j-2;
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=i; k++)
		{
			cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(i=n-1; i>=1; i--)
	{
	    for(k=1; k<=i; k++)
		{
			cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//arrow pattern with no