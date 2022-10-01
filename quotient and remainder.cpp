#include<iostream>       
using namespace std;
int main()
{
	int n, d, q, r;
	cout<<"Enter a no and the divisor: "<<endl;
	cin>>n>>d;
	q=n/d;
	r=n%d;
	cout<<"The quotient of above operation is: "<<q<<endl;
	cout<<"The remainder of above operation is: "<<r<<endl;
	return 0;
}