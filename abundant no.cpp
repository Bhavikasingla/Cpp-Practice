#include<iostream>
using namespace std;
int main()
{
	int i, sum=0, n;
	cin>>n;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		} 
	}
	if(sum>n)
	{
	    cout<<n<<" is an Abundant Number"<<endl;
		cout<<"Abundance is: "<<(sum-n);
	}
	else
	{
		cout<<n<<" is not an Abundant Number"<<endl;
	}
	return 0;
}
