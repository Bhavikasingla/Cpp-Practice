#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1)
	return n;
	else 
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	cout<<"Fibonacci series is: ";
	for(int i=0; i<n; i++)
	{
		cout<<fib(i)<<endl;
	}
	return 0;
}