#include<iostream>
using namespace std;


int main(){
	
	int i, n;
	cout<<"enter length of the string"<<endl;
	cin>>n;
	cout<<"enter elements of string"<<endl;
	char arr[n+1];
	for(i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	cout<<"reversed string is: "<<endl;
	for(i=n; i>=1; i--)
	{
		cout<<arr[i];
	}
	return 0;
}