#include <iostream>  //pyramid * pattern sol 1
using namespace std;
int main() {
	int i, j, n, s;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(s=n-i; s>=1; s--)
		{
			cout<<" "<<" ";
		}
		for(j=i; j>=1; j--)
		{
		    cout<<i<<" ";
		}
		for(j=i-1; j>=1; j--)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}

    return 0;
}