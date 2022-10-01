#include<iostream>       
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter two no a and b: "<<endl;
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"New value of a is: "<<a<<endl;
	cout<<"New value of b is: "<<b<<endl;
	return 0;
}