#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter array: "<<endl;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int b[n]={0};
	cout<<"elements which are repeating and their frequency are: "<<endl;
	for(int i=0; i<n; i++)
	{
		if(b[i]!=1)
		{
			int count = 1;
			for(int j=i+1; j<n; j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
					b[j]=1;
				}
			}
			if(count!=1)
			{
				cout<<arr[i]<<" "<<count<<endl;
			}
		}
	}
	return 0;
}