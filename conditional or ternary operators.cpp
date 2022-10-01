#include<iostream>    //conditional or ternary operators
using namespace std;
int main(){
	int a, b;
	cout<<"enter two no's: "<<endl;
	cin>>a>>b;
	bool c;
	c=(a>b)? true : false;
	cout<<c<<endl;
	return 0;
}