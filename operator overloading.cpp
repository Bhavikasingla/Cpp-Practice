#include<iostream>
using namespace std;

class operator_overloading
{
	private:
		int real;
		int img;
		
    public:
    	operator_overloading(){
    		real=0;
			img=0;
		}
		
	operator_overloading(int r1, int i1)
	{
		real=r1;
		img=i1;
	}
	
	operator_overloading operator+(operator_overloading o1)
	{
		operator_overloading o2;
		o2.real=real+o1.real;
		o2.img=img+o1.img;
		return o2;
	}
	
	void display()
	{
		cout<<real<<endl<<img<<endl;
	}
};



int main(){
	
	operator_overloading o3(2,3);
	operator_overloading o4(2,2);
	operator_overloading o5;
	o5 = o3 + o4;
	o5.display();
	return 0;
}