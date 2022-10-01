#include<iostream>   
using namespace std;

class base_class1
{
	private:
		int age;
	protected:
		int roll_no;
	public:
		string name;
		
	void input()
		{ 		
			cin>>name>>roll_no;
		}
};

class base_class2
{
	private:
		string email;
	public:
		char sex;
	void input()
		{
			cin>>sex; 
		}
};

class derived_class2:public base_class1,public base_class2
{
	public:
		float marks;
		
		void display()
		{
			cout<<sex<<endl;
		}
		
		void display1()
		{
			cout<<name<<endl<<roll_no<<endl;
		}
};

int main()
{
	derived_class2 d2;//ambiguity error
	d2.input();
	d2.display1();
	return 0;
}