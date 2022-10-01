#include<iostream>
using namespace std;
int main()
{
	int i, j, n, k;
	cin>>n;
	for(i=1; i<=n; i++)
	{
	for(k=1; k<i; k++)
		{
			cout<<" ";
		}
		for(j=i; j<=n; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(i=n-1; i>=1; i--)
	{
	    for(k=1; k<i; k++)
		{
			cout<<" ";
		}
		for(j=i; j<=n; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}//hour-glass