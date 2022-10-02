#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<char, int,greater<char>> m;
	m['a']=1;
	m['b']=2;
	m['c']=3;
	m.insert({'d',4});
	map<char, int>::iterator i;
	for(i=m.begin(); i!=m.end(); i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}
	return 0;
}