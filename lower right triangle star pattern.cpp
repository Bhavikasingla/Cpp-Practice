#include<iostream>
using namespace std;
int main()
{
	int i, j, n, m=1;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	for(i=n; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			cout<<"*"<<"\t";
			//m++;
		}
		cout<<endl;
	}
	return 0;
}