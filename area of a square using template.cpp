#include<iostream>

using namespace std;

template<typename t>
t square(t x)
{
	return x*x;
}

int main()
{
	int a=8;
	float x=8.1;
	double y=9.2;
	
	cout<<"Area when datatype is int: "<<square(a);
	cout<<endl<<"Area when datatype is float: "<<square(x);
	cout<<endl<<"Area when datatype is double: "<<square(y);
	
	return 0;
}