#include<iostream>  
using namespace std;
int main()
{
	int a;
	cout<<"Enter a year: "<<endl;
	cin>>a;
	if(a%400==0)
	{
		cout<<"Leap year"<<endl;
	}
	else if(a%4==0)
	{
		if(a%100!=0)
		{
			cout<<"Leap year"<<endl;
		}
		else
		{
			cout<<"Not a Leap year"<<endl;
		}
	}
	else
	{
		cout<<"Not a Leap year"<<endl;
	}
	return 0;
}