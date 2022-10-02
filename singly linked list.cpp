#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;//because int ptr toh int ko point karega but humme yahan next node ko point krega so struct type
};

struct node* head=NULL;//because initially my ll is empty so head is pointing to null

void insert_begin(int new_data)
{
	struct node* new_node=new node;//here, new keyword is used for dynamic allocation
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
}

void insert_end(int new_data)
{
	if(head==NULL)
	{
	    insert_begin(new_data);
	}
	else
	{
	    struct node* new_node=new node;//here, new keyword is used for dynamic allocation
	    new_node->data=new_data;
	    new_node->next=NULL;
	    struct node *ptr=head;
	    while(ptr->next!=NULL)
	    {
		   ptr=ptr->next;
	    }
	    ptr->next=new_node;
	}
}

void insert_between(int new_data, int position)
{
	struct node* new_node=new node;//here, new keyword is used for dynamic allocation
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
	ptr->next=new_node;
}

void delete_begin()
{
//     struct node* new_node=new node;//here, new keyword is used for dynamic allocation
// 	new_node->data=new_data;
// 	new_node->next=head;
	head=head->next;
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

void delete_between(int p)
{
	
	struct node* ptr=head;
	int count=0;
	while(count!=(p-1))
	{
		ptr=ptr->next;
		count++;
	}
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

int main()
{
	insert_begin(8);
	insert_begin(9);
	insert_begin(10);
	insert_begin(11);
	insert_end(1);
	delete_begin();
	delete_end();
	delete_between(2);
	search(9);
	search(1);
	insert_begin(12);
	insert_begin(13);
	insert_between(22,3);
	display();
	return 0;
}