#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=3;
	vector<int> v2(n,10);
	cout<<"initial vector elements: "<<endl;
	for(int i=0; i<v2.size(); i++)
	{
	    cout<<v2[i]<<endl;
	}
	v2.push_back(20);
	cout<<"vector elements after pushback: "<<endl;
	for(int i=0; i<v2.size(); i++)
	{
	    cout<<v2[i]<<endl;
	}
	return 0;
}