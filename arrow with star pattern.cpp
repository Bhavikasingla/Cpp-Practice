#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<" ";
		}
		for(j=i+1; j<=2*i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n-1; i>=1; i--)
	{
	    for(j=1; j<=i; j++)
		{
			cout<<" ";
		}
		for(j=i+1; j<=2*i; j++)
		{
			cout<<"*";
		}
		cout<<endl;	
	}
	return 0;
}//arrow with *