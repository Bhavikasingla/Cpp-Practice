#include<iostream>
using namespace std;
int main()
{
	int i, j, n, k=1;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i==1||i==n||j==1||j==i)
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
			k++;
		}
		cout<<endl;
	}
}
/*
1
11
101
1001
11111
*/