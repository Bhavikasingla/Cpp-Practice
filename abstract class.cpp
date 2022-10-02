#include<iostream>
using namespace std;

class base{
	
	public:
		virtual void display()=0;
		void output()
		{
			cout<<"Base";
		}
};

int main(){
	
	cout<<"error: because we cannot create an object of the base class"<<endl;
	return 0;
}