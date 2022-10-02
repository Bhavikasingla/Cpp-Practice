#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node* head=NULL;

void insert_begin(int new_data)
{
	struct node* new_node=new node;
	new_node->data=new_data;
	new_node->prev=NULL;
	new_node->next=head;
	//head=new_node;
	if(head != NULL)
	{
		head->prev=new_node;
	}
	head=new_node;
}

void insert_end(int new_data)
{
	struct node* new_node=new node;
	new_node->data=new_data;
	new_node->next=NULL;
	struct node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->prev=ptr;
}

void insert_between(int new_data, int position)
{
	struct node* new_node=new node;
	new_node->data=new_data;
//	new_node->next=NULL;
	struct node *ptr=head;
	for(int i=1; i<position-1; i++)
	{
	    if(ptr->next!=NULL)
	    {
	    	ptr=ptr->next;
		}
	}
	new_node->next=ptr->next;
	new_node->prev=ptr;
	ptr->next=new_node;
	ptr->next->prev=new_node;
}

void delete_begin()
{
	head=head->next;
	head->prev=NULL;
}

void delete_end()
{
    struct node* ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
}

void delete_between(int position)
{
	
	struct node* ptr=head;
	int count=0;
//	while(count!=(position-1))
//	{
//		ptr=ptr->next;
//		count++;
//	}
    for(int i=2; i<position; i++)
    {
    	if(ptr->next!=NULL)
    	{
    		ptr=ptr->next;
		}
	}
	ptr->next->next->prev=ptr;
	ptr->next=ptr->next->next;
}

void search(int item)//to search if an element is present in the list
{
	bool flag=false;
	struct node* ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==item){
			cout<<item<<" item exists in the list "<<endl;
			flag=true;
			break;
		}
		ptr=ptr->next;
	}
	if(flag==false)
		{
			cout<<item<<" item doesn't exists in the list "<<endl;
		}
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

void sortNode()//simillar to array logic
{
	int temp;
	struct node* ptr=head;
	struct node* index=NULL;
	while(ptr!=NULL)
	{
		index=ptr->next;
		while(index!=NULL)
		{
		    if(ptr->data > index->data)
		    {
			   temp=ptr->data;
			   ptr->data=index->data;
			   index->data=temp;
		    }
		    index=index->next;
	      }
	    ptr=ptr->next;
	}
}

int main()
{
	insert_begin(8);
	insert_begin(9);
	insert_begin(10);
	insert_begin(11);
	insert_end(1);
	display();
	cout<<endl;
	delete_begin();
	delete_end();
	delete_between(2);
	search(9);
	search(12);
//	insert_begin(12);
//	insert_begin(13);
	insert_between(22,3);
	display();
	cout<<endl;
	sortNode();
	display();
	return 0;
}