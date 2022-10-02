#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=10;
	vector<int> v1{1,2,3,4,5};
	
	for(auto i=v1.rbegin(); i!=v1.rend(); i++)
	{
	    cout<<*i<<" ";
	}
	return 0;
}