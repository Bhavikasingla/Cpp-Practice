#include<iostream>
using namespace std;
//based on circular array
int queue[5];
int front=-1; 
int rear=-1;
int size=5;

void enqueue(int element)
{
	if((front==0&&rear==(size-1))||(rear==(front-1)%(size-1)))
	{
		cout<<"overflow!!"<<endl;
		return;
	}
	else if(front==-1)//insert 1st element
	{
		front=rear=0;
		queue[rear]=element;
	}
	else if(rear==(size-1)&&front!=0)
	{
		rear=0;
		queue[rear]=element;
	}
	else
	{
		rear++;
		queue[rear]=element;
	}
}

void dequeue()
{
	if(front==-1)
	{
		cout<<"underflow!!"<<endl;
		return;
	}
	int del_ele=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==(size-1))
	{
		front=0;
	}
	else
	{
		front++;
	}
	cout<<"element deleted is: "<<del_ele<<endl;
}

void display()
{
	cout<<"elements present in queue are: "<<endl;
	if(front==-1)
	{
		cout<<"underflow!!"<<endl;
		return;
	}
	if(front<=rear)
	{
		for(int i=front; i<=rear; i++)
		{
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		for(int i=front; i<=(size-1); i++)
		{
			cout<<queue[i]<<" ";
		}	
		for(int j=0; j<=rear; j++)
		{
			cout<<queue[j]<<" ";
		}
		cout<<endl;
	}
}

void odd_display()
{
	cout<<"elements present in queue are: "<<endl;
	if(front==-1)
	{
		cout<<"underflow!!"<<endl;
		return;
	}
	if(front<=rear)
	{
		for(int i=front; i<=rear; i+=2)
		{
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		for(int i=front; i<=(size-1); i+=2)
		{
			cout<<queue[i]<<" ";
		}	
		for(int j=0; j<=rear; j+=2)
		{
			cout<<queue[j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int choice;
//	cin>>choice;
	int ele;
	do{
		cout<<"enter 1 for enqueue: "<<endl;
		cout<<"enter 2 for dequeue: "<<endl;
		cout<<"enter 3 for display: "<<endl;
		cout<<"enter 4 for odd display: "<<endl;
		cout<<"enter 5 for exit: "<<endl;
		cout<<"enter choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter the element: "<<endl;
				cin>>ele;
				enqueue(ele);
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				odd_display();
				break;
				
			case 5:
				exit(0);
		}
	}
	while(choice!=5);
	return 0;
	
}