#include<iostream>    //assignment operators
using namespace std;
int main()
{
	int a, b;
	cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    a+=b;
    cout<<"result of addition assignment operator is: "<<a<<endl;
    a-=b;   //here, the default value of a is not taken but the new value acc to previous opreration i.e. a from a=a+b
    cout<<"result of subtraction assignment operator is: "<<a<<endl;
    a*=b;   //here, the default value of a is not taken but the new value acc to previous opreration i.e. a from a=a-b
    cout<<"result of multiplication assignment operator is: "<<a<<endl;
    a/=b;   //here, the default value of a is not taken but the new value acc to previous opreration i.e. a from a=a*b
    cout<<"result of division assignment operator is: "<<a<<endl;
}