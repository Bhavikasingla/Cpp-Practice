#include<iostream>
#include<vector>
using namespace std;//insert fn which works only on first index because we have given begin value to iterator
int main()
{
	vector<int> v1{1,2,3,4,5};
	vector<int>::iterator i=v1.begin();
	v1.insert(i,100);
	for(int i=0; i<v1.size(); i++)
	{
	    cout<<v1[i]<<" ";
	}
	return 0;
}