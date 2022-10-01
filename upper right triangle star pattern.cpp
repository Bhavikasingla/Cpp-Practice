#include<iostream>
using namespace std;
int main()
{
	int i, j, n, m=1;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"*"<<"\t";
			//m++;
		}
		cout<<endl;
	}
	return 0;
}