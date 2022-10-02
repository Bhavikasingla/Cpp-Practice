#include<iostream>
using namespace std;

class operator_overloading //urnary operator overloading
{
	int a;
	public:
		
    operator_overloading()
    {
    	a=4;
	}
	
	void operator++()
	{
		a++;
	}
	void operator--()
	{
		a--;
	}
	void display()
	{
		cout<<a<<endl;
	}
};



int main(){
	
	operator_overloading o3;
	++o3;
	o3.display();
	--o3;
	o3.display();
	return 0;
}