#include <iostream>
using namespace std;
int main() {
	int i, j, n, s;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	for(i=n; i>=1; i--)
	{
		for(s=1; s<=n-i; s++)
		{
			cout<<" "<<"\t";
			//m++;
		}
		for(j=1; j<=i; j++)
		{
		    cout<<"*"<<"\t";
		}
		cout<<endl;
	}

    return 0;
}