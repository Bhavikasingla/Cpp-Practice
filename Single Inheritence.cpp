#include<iostream>   
using namespace std;

class base_class
{
	private:
		int age;
	protected:
		int roll_no;
	public:
		string name;
};

class derived_class:public base_class
{
	private:
		string email;
	public:
		void input()
		{
			cin>>email>>roll_no>>name;  
		}
		void display()
		{
			cout<<email<<endl<<roll_no<<endl<<name<<endl;
		}
};

int main()
{
	derived_class d1;
	//d1.roll_no='102';
	d1.input();
	d1.display();
	//cout<<d1.roll_no;
	return 0;
}