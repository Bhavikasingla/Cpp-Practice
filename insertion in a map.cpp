#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int> n;
	n[1]=10;
	n[2]=20;
	n[3]=30;
	map<char, int> m={{'a', 1}, {'b',2}, {'c',3}};
	map<char, int>::iterator i;
	for(i=m.begin(); i!=m.end(); i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}
	return 0;
}