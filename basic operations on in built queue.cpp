#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	cout<<"size: "<<q.size()<<endl;
	cout<<"front: "<<q.front()<<endl;
	cout<<"back: "<<q.back()<<endl;
	cout<<"empty: "<<q.empty()<<endl;
	cout<<"Elements present in queue are: ";
	queue<int> temp=q;
	while(!temp.empty())
	{
		cout<<temp.front()<<" ";
		temp.pop();
	}
	cout<<endl<<"size of queue now: "<<q.size()<<endl;
	return 0;
}