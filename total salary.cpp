#include<iostream>  //total salary
using namespace std;
int main()
{
	float bs,hra,ts,da;
	cout<<"Enter the basic salary of the employee: "<<endl;
	cin>>bs;
	if(bs<=5000)
	{
		hra=bs*0.02;
		da=bs*0.02;
	}
	else if(bs<=10000)
	{
		hra=bs*0.03;
		da=bs*0.03;
	}
	else if(bs<=15000)
	{
		hra=bs*0.03;
		da=bs*0.035;
	}
	else
	{
		hra=bs*0.04;
		da=bs*0.045;
	}
	ts=bs+da+hra;
	cout<<"Total salary is: "<<ts<<endl;
	return 0;
}