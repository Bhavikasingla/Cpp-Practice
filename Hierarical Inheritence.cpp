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
		string name1;
};

class derived_class1:public base_class
{
	private:
		string email;
	public:
		char sex;
};

class derived_class2:public derived_class1
{
	public:
		float marks;
		void input1()
		{
			cin>>sex>>marks; 	
		}
		
		void display1()
		{
			cout<<sex<<endl<<marks<<endl;
		}
};

class derived_class3:public derived_class1
{
	public:
		int sub;
		void input()
		{
			cin>>sub>>name1; 
		}
		
		void display()
		{
			cout<<sub<<endl<<name1<<endl;
		}
};

int main()
{
	derived_class2 d2;
	d2.input1();
	d2.display1();
	derived_class3 d3;
	d3.input();
	d3.display();
	return 0;
}