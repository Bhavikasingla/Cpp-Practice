#include<iostream>  //even or odd no
using namespace std;
int main()
{
	int a;
	cout<<"enter a number: "<<endl;
	cin>>a;
	(a%2==0)? cout<<"the number is even" : cout<<"the number is odd";
	return 0;
}