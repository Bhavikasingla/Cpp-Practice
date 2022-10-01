#include<iostream>    
using namespace std;
int main()
{
	int i, n, b, flag=0;
	cout<<"Enter the no of elements in array: "<<endl;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched \n";
	cin>>b;
	for(i=0; i<n; i++)
	{
		if(a[i]==b)
		{
			cout<<"element is present at index: "<<i<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"element is not present"<<endl;
	}
	
	return 0;
}