#include<iostream>   
using namespace std;
int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int div(int a, int b);
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int multiply(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a/b;
}
int main()
{
	int a, b, c, d, e, f;
	cout<<"enter 2 no: "<<endl;
	cin>>a>>b;
	c=add(a,b);
	cout<<"sum is: "<<c<<endl;
	d=sub(a,b);
	cout<<"sub is: "<<d<<endl;
	e=multiply(a,b);
	cout<<"multiply is: "<<e<<endl;
	f=div(a,b);
	cout<<"div is: "<<f<<endl;
	return 0;
} 