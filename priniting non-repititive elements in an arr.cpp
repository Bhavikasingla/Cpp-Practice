#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter length of array: ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"non-repeating array elements are: "<<endl;
	for(int i=0; i<n; i++)
	{
		bool flag = true;
		for(int j=0; j<n; j++)
		{
			if(i!=j && arr[i]==arr[j])
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}