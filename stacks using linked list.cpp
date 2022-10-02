#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};

struct node* head=NULL;

void push(int new_data)
{
	struct node* new_node=new node;
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
}

void pop()
{
	head=head->next;
}


void top()
{
	cout<<head->data<<endl;
}
void display()
{
	struct node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

int main()
{
	int n;
	cin>>n;
	int ch;
//	cin>>ch;
	do{
		cout<<"enter a no: "<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Top"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"any other no is wrong choice!!"<<endl;
		cin>>ch;
		int daata;
		switch(ch)
	    {
		case 1:
			cin>>daata;
			push(daata);
			//cout<<"1"<<endl;
			cout<<endl;
			break;
			
		case 2:
			pop();
			//cout<<"2"<<endl;
			cout<<endl;
			break;
			
		case 3:
			top();
			//cout<<"3"<<endl;
			cout<<endl;
			break;
			
		case 4:
			display();
			cout<<endl;
			break;
			
		case 5:
			//exit();
			cout<<"exit"<<endl;
			break;
			
		default:
			cout<<"wrong option!"<<endl;
	    }
	}
	while(ch!=5);
	return 0;
}