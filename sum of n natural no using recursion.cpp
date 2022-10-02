#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==1)
	return 1;
	else 
	return n+sum(n-1);
}

int main()
{
	int n;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	cout<<"sum is: ";
	cout<<sum(n);
	return 0;
}