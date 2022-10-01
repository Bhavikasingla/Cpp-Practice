#include<iostream> 
using namespace std;
int main()
{
	int n, i=2;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	
	while(i<=n-1)
	{
		if(n%i==0)
		{
			cout<<"Not prime"<<endl;
			break;
		}
		i++;
	}
	
	if(i==n)
	{
		cout<<"Prime no"<<endl;
	}
	return 0;
}