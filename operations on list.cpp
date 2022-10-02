#include<iostream>
#include<list>
using namespace std;

int main()//list is non contageous so insertion/deletion only at begin or end
{
	list <int> l1={10, 20, 30};
	list <int>:: iterator i;
	for( i=l1.begin(); i!=l1.end(); ++i)
	{
		cout<<*i<<" ";
		}
		cout<<endl;
		l1.push_back(40);
		l1.push_front(80);
		//i=l1.begin()+4;
		l1.insert(i,50);
		l1.pop_back();//deletes first element fromo back
		l1.pop_front();//deletes first element from start
		l1.sort();
		for( i=l1.begin(); i!=l1.end(); ++i)
    	{
		cout<<*i<<" ";
		}
		cout<<endl;
		l1.reverse();
		for( i=l1.begin(); i!=l1.end(); ++i)
    	{
		cout<<*i<<" ";
		}
		cout<<endl<<l1.front(); //displays first element
		cout<<endl<<l1.back();//displays last element
		l1.clear();
		int a=l1.empty();
		cout<<endl<<a;// 1 is true , 0 is false
	return 0;
}