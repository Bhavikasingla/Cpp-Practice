#include<iostream>
using namespace std;

class overload_fn
{
	public:
		void add(int a, int b)
		{
			cout<<a+b<<endl;
		}
		
		void add(int a, int b, int c)
		{
			cout<<a+b+c<<endl;
		}
		
		void add(float a, int b)
		{
			cout<<a+b<<endl;
		}
		
		void add(int a, float b)
		{
			cout<<a+b<<endl;
		}
		
		void add(float a, float b)
		{
			cout<<a+b<<endl;
		}
};



int main(){
	
	overload_fn f1;
	f1.add(5,3);
	f1.add(5,3,2);
	f1.add(5.3f,3);
	f1.add(5,3.6f);
	f1.add(5.3f,3.6f);
	return 0;
}