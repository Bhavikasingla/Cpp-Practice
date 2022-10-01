#include<iostream>   
using namespace std;
class car{
	private:
		int model;
		string color;
		float cost;
	
	public:
		car(int m1, float c1){
			model=m1;
			cost=c1;
		}
	void display();
		
};

int main()
{
	car c1(2022, 566);
	c1.display();
	return 0;
}

void car::display()
{
	cout<<model<<endl<<cost;
}