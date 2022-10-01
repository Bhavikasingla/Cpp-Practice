#include<iostream>  
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter 3 no's: "<<endl;
	cin>>a>>b>>c;
	(a>b&&a>c)?cout<<"a is greatest":(b>c&&b>a)?cout<<"b is greatest":cout<<"c is greatest";
	return 0;
}