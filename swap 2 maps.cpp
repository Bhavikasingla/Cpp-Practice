#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<char, int> m;
	m['a']=1;
	m['b']=2;
	m['c']=3;
	m.insert({'d',4});
	cout<<m.size()<<endl;
	map<char, int> m2;
	m2['e']=5;
	m2['f']=6;
	m2['g']=7;
	m2.insert({'h',8});
	swap(m,m2);//here datatype needs to be same size may differ
	cout<<"map1: "<<endl;
	map<char, int>::iterator i;
	for(i=m.begin(); i!=m.end(); i++)
	{
		cout<<" "<<(*i).first<<" "<<(*i).second<<endl;
	}
	cout<<"map2: "<<endl;
	for(i=m2.begin(); i!=m2.end(); i++)
	{
		cout<<" "<<(*i).first<<" "<<(*i).second<<endl;
	}
	return 0;
}