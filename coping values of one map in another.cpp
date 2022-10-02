#include<iostream>
#include<map>//only not working here works fine on online compiler
using namespace std;

int main()
{
	map<char, int> m;
	m['a']=1;
	m['b']=2;
	m['c']=3;
	map<char, int> m1;
	m1=m;
	cout<<"m1: "<<endl;
	map<char, int>::iterator i;
	for(i=m.begin(); i!=m.end(); i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}
	cout<<"m2: "<<endl;
	for(i=m1.begin(); i!=m1.end(); i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}
	return 0;
}
