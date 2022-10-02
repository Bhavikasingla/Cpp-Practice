#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;
	int n, ele;
	cout<<"enter the size of vector to be formed: "<<endl;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	    cin>>ele;
	    v1.push_back(ele);
	}
	cout<<"elements now present in the vector are: "<<endl;
	for(int i=0; i<n; i++)
	{
	    cout<<v1[i]<<" ";
	}
	return 0;
}