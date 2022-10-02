#include<iostream>

using namespace std;

template<class t>
class x
{
	private:
		t a;
		t b;
		
	public:
		x(t a1, t b1)//parameterized constructor of class type t
		{
			a=a1;
			b=b1;
	    }
			t add()
			{
				return a+b;
			}
	
};

int main()
{
	x <int> addint(8,9);
	x <float> addfloat(8.2, 9.4);
	x <double> adddouble(9.3, 9.2);
	cout<<"value of int datatype is: "<<addint.add()<<endl;
	cout<<"value of float datatype is: "<<addfloat.add()<<endl;
	cout<<"value of double datatype is: "<<adddouble.add()<<endl;
	
	
	return 0;
}