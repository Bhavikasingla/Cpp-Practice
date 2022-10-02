#include<iostream>
using namespace std;
struct node{
	int data;
	//struct node *prev;
	struct node *next;
};

struct node* head=NULL;

void insert_begin(int new_data)
{
	struct node* new_node=new node;
	struct node* ptr=head;
	new_node->data=new_data;
	new_node->next=head;
	if(head != NULL)
	{
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=new_node;
	}
	else
	{
		new_node->next=new_node;
		head=new_node;
	}

}

void display()
{
	struct node* ptr;
	ptr=head;
	do
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	while(ptr!=head);
	
}

int main()
{
	insert_begin(8);
	insert_begin(9);
	insert_begin(10);
	insert_begin(11);
//	insert_end(1);
	display();
//	cout<<endl;
//	delete_begin();
//	delete_end();
//	delete_between(2);
//	search(9);
//	search(12);
//	insert_begin(12);
//	insert_begin(13);
//	insert_between(22,3);
//	display();
//	cout<<endl;
//	sortNode();
//	display();
	return 0;
}