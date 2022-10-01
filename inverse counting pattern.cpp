#include<iostream>
using namespace std;
int main()
{
	int i, j, n, m;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	m=(n*(n+1)/2);
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<m<<"\t";
			m--;
		}
		cout<<endl;
	}
	return 0;
}