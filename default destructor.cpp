#include<iostream>    
using namespace std;
class car{
	private:
		int model;
		string *color;
		float cost;
	
	public:
		car(int m1, float c1){
			model=m1;
			cost=c1;
		}
	
	~car()
	{
	cout<<"Destructor";   
	}
		
	car(car &t1){
			model=t1.model;
			cost=t1.cost;
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
	cout<<model<<" "<<cost<<" "<<color<<endl;
}