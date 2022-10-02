#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=3;
	vector<int> v1{10, 20, 30};
	vector<int> v2=v1;
	cout<<"elements in vector2 are: "<<endl;
	for(int i=0; i<v2.size(); i++)
	{
	    cout<<v2[i]<<" ";
	}
	return 0;
}