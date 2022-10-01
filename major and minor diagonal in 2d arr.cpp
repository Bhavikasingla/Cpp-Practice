// sum and sub in 2d matrix 
#include<iostream>
#include<bits/stdc++.h>  
using namespace std;
int main()
{
	int i, a[2][2],j;
	cout<<"Enter the no of elements in array a: "<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"major diagonal: "<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			if(i==j)
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
		
	}
	cout<<"minor diagonal: "<<endl;
	for(i=0; i<2; i++)  
	{
		for(j=0; j<2; j++)
		{
			if(i+j==1)
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
		
	}
	return 0;
}