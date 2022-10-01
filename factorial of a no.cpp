#include<iostream>
using namespace std;
int main()
{
	int i=1, n, fact=1;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	while(i<=n)
	{
	 fact=fact*i;
	 i++;	
	}
	cout<<"Factorial of entered no is: "<<fact<<endl;
	return 0;
}