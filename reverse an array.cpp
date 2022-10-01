// reverse a no in arr withyout using a new arr
#include<iostream>
#include<bits/stdc++.h>  
using namespace std;
int main()
{
	int i, j, n, temp;
	cout<<"Enter the no of elements in array: "<<endl;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=0, j=n-1; i<j; i++, j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(j=0; j<=n-1; j++)
	{
		cout<<a[j]<<" ";		
	}
	return 0;
}