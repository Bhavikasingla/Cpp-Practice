#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
};

Node* head=NULL;

void enqueue(int element){
  Node* curr=new Node;
  curr->data=element;
  curr->next=NULL;
  if(head==NULL){ 
    head=curr;
  }
  else{
    Node* temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=curr;
  }
}

void dequeue(){
  if(head==NULL){
    cout<<"Underflow"<<endl;
    return;
  }
  head=head->next;
}

void display(){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main() {
  int choice;
  do{
  	cout<<"enter 1 for enqueue: "<<endl;
	cout<<"enter 2 for dequeue: "<<endl;
	cout<<"enter 3 for display: "<<endl;
	cout<<"enter 4 for exit: "<<endl;
	cout<<"enter choice"<<endl;
    cin>>choice;
    switch(choice){
      case 1:
        int ele;
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
        exit(0);
    }
  }while(choice);
}