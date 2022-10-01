#include<iostream>   
using namespace std;
int fa(int n)
{
	int i=1, fact=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	return fact;
}
int main()
{
	int n, fact=1, f;
	cout<<"enter a no: "<<endl;
	cin>>n;
	f=fa(n);
	cout<<"factorial is: "<<f;
	return 0;
}