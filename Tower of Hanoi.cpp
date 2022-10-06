#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *prev, *next;
};

struct Node *front=NULL;
struct Node *rear=NULL;
int n=0;

bool DQempty(){
    return front==NULL;
}

int size(){
    return n;
}

int getFront(){
    if(DQempty()){
        return -1;
    }
    else{
        return front->data;
    }
}

int getRear(){
    if(DQempty()){
        return -1;
    }
    return rear->data;
}

void insertFront(int data){
    struct Node *ptr= new Node;
    ptr->data=data;
    ptr->prev=ptr->next=NULL;
    if(ptr==NULL){
        cout<<"OVERFLOW\n";
    }
    else if(DQempty()){
        front=rear=ptr;
    }
    else{
        ptr->next=front;
        front->prev=ptr;
        front=ptr;
    }
    n++;
}

void insertRear(int data){
    struct Node *ptr=new Node;
    ptr->data=data;
    ptr->prev=ptr->next=NULL;
    if(ptr==NULL){
        cout<<"OVERFLOW\n";
    }
    else if(DQempty()){
        front=rear=ptr;
    }
    else{
        ptr->prev=rear;
        rear->next=ptr;
        rear=ptr;
    }
    n++;
}

void deleteFront(){
    if(DQempty()){
        cout<<"Underflow\n";
        return;
    }
    else if(front->next==NULL){
        front=rear=NULL;
    }
    else{
        front=front->next;
        front->prev=NULL;
    }
    n--;

}

void deleteRear(){
    if(DQempty()){
        cout<<"Underflow\n";
        return;
    }
    else if(front->next==NULL){
        front=rear=NULL;
    }
    else{
        rear=rear->prev;
        rear->next=NULL;
    }
    n--;

}

void display(){
    struct Node * ptr=front;

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"\n";
}

int main(){

    insertFront(4);
    insertRear(5);
    insertFront(6);
    insertFront(7);
    cout<<size()<<"\n";
    display();
    deleteFront();
    deleteRear();
    display();
    getFront();
}