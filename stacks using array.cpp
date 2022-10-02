#include<iostream>
using namespace std;
int position=0;
int count=0;
void push(int arr[],int a)
{
	arr[position]=a;
	position++;
	count++;
}
void pop(int arr[])
{
	arr[position-1]=0;
	position--;
	count--;
}
void top(int arr[])
{
	cout<<arr[count-1]<<endl;
}
void display(int arr[])
{
	for(int i=(count-1); i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
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
		int data;
		switch(ch)
	    {
		case 1:
			cin>>data;
			push(arr,data);
			//cout<<"1"<<endl;
			break;
			
		case 2:
			pop(arr);
			//cout<<"2"<<endl;
			break;
			
		case 3:
			top(arr);
			//cout<<"3"<<endl;
			break;
			
		case 4:
			display(arr);
			//cout<<"4"<<endl;
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