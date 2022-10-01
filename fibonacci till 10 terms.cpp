#include<iostream>   
using namespace std;
int main()
{
	int a=0, b=1, c, i=1;
	//cout<<"Enter a no: "<<endl;
	//cin>>n;
	cout<<"Fibonacci series till 10 terms is: 0 1 ";
	while(i<=8)
	{
	 c=a+b;
	 a=b;
	 b=c;
	 cout<<c<<" ";
	 i++;	
	}
	//cout<<c<<endl;
	return 0;
}