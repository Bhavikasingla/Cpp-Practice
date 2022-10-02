#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<char, int> m;
	m['a']=1;
	m['b']=2;
	m['c']=3;
	m.insert({'d',4});//2 ways to insert
	m.insert({'a',4});//this way we can not change a value in map
	m['a']=8;//changes if we give assignment operator
	map<char, int>::iterator i;
	for(i=m.begin(); i!=m.end(); i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}
	return 0;
}