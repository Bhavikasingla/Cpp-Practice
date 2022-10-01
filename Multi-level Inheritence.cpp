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

class derived_class1:private base_class
{
	private:
		string email;
	public:
		char sex;
		void input()
		{
			cin>>email>>roll_no>>name;   
		}
		void display()
		{
			cout<<email<<endl<<roll_no<<endl<<name<<endl;
		}
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
		//	cout<<name<<endl;
		}
};

int main()
{
	derived_class2 d2;
	d2.input1();
	d2.display1();
	return 0;
}