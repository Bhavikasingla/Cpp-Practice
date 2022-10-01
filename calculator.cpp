//calculator -> +,-,*,/ on 2 no's for rest wrong operation
#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char c;
	cout<<"Enter an operator: "<<endl;
	cin>>c;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	switch(c)
	{
		case '+':
			cout<<"Sum is: "<<a+b;
			break;
		case '-':
			cout<<"Difference is: "<<a-b;
			break;
		case '*':
			cout<<"Multiplication is: "<<a*b;
			break;
		case '/':
			cout<<"Division is: "<<a/b;
			break;
		default:
			cout<<"wrong operator";
	}
	return 0;
}