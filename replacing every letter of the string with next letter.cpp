#include<iostream>
using namespace std;


int main(){
	
	int i, n;
	cout<<"enter length of the string"<<endl;
	cin>>n;
	char arr[n+1];
	cout<<"enter elements of string"<<endl;
	for(i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	cout<<"new arr with every char is replaced with next alphabet: "<<endl;
	for(i=1; i<=n; i++)
	{
		arr[i]=arr[i]+1;
		cout<<arr[i];
	}
	return 0;
}