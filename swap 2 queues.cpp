#include<iostream>
#include<queue>//only not working here works fine on online compiler
using namespace std;

int main()
{
	queue<int> q1;
	q1.push(10);
	q1.push(20);
	q1.push(30);
	q1.push(40);
	queue<int> q2;
	q2.push(50);
	q2.push(60);
	q2.push(70);
	q2.push(80);
	q1.swap(q2);
	cout<<"q1: ";
	queue<int> temp=q1;
	while(!temp.empty())
	{
		cout<<temp.front()<<" ";
		temp.pop();
	}
	cout<<endl<<"q2: ";
	queue<int> tempp=q2;
	while(!tempp.empty())
	{
		cout<<tempp.front()<<" ";
		tempp.pop();
	}
	return 0;
}