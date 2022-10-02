#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	return 1;
	else 
	return n+fact(n-1);
}

int main()
{
	int n;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	cout<<"fact is: ";
	cout<<fact(n);
	return 0;
}