#include<iostream>
using namespace std;
int main()
{
	float start, final, c;
	cout<<"Enter temperatures in fahrenheit: "<<endl;
	cin>>start>>final;
	for(float i=start; i<=final; i+=20)
	{
		c=(5.0/9.0)*(i-32.0);
		cout<<i<<" F "<<"= "<<c<<endl;
	}
	return 0;
}