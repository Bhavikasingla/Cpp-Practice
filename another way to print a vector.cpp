#include<iostream>
#include<vector>//different way to print a vector
using namespace std;
int main()
{
	vector<int> v1{10, 20, 30};
	vector<int>::iterator i;
	for(i=v1.begin(); i!=v1.end(); i++)
	{
	    cout<<*i<<" ";
	}
	
	return 0;
}