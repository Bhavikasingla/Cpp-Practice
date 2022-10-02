#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter length: ";
	cin>>n;
	int t;
	cout<<"Enter t: ";
	cin>>t;
	int a[n];
	cout<<"Enter array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int b[n]={0};
	int found=0;
	for(int i=0; i<n; i++)
	{
		if(b[i]!=1)
		{
			for(int j=0; j<n; j++)
			{
				b[j]=1;
				if(a[i]+a[j]==t)
				{
					cout<<"Pair Found ("<<a[i]<<","<<a[j]<<")"<<endl;
					found=1;
				}
				if(found==1)
				{
					break;
				}
			}
		}
	}
	if(found==0)
	{
		cout<<"No pair found"<<endl;
	}
	return 0;
}