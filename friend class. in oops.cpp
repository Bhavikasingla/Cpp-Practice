#include<iostream>
using namespace std;
class car{
	private:
		int model;
		
	protected:
		string color;
		
	public:
		float cost;
	
	friend class car1;
		
};

class car1
{
	public:
		void input(car t)
		{
			cin>>t.model>>t.color;
			cout<<"model = "<<" "<<t.model<<endl<<"color = "<<" "<<t.color;
		}
};

int main()
{
	car c2;
	car1 c1;
	cout<<"Enter the model and color of the car: "<<endl;
	c1.input(c2);
	return 0;
}