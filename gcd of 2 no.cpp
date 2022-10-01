#include<iostream>
using namespace std;
int main()
{
	int a, b, min, i=1, gcd=1;
	cout<<"Enter 2 no's: "<<endl;
	cin>>a>>b;
	min=(a<b)?a:b;
	if(a%b==0)
		{
			gcd=b;
		}
		else if(b%a==0)
		{
			gcd=a;
		}
	while(i<=min)
	{
		if(a%i==0&&b%i==0)
		{
			//a%i==0&&b%i==0;
			gcd=gcd*i;
			
		}
		else{
			gcd=1;
		}
		i++;
	}
	cout<<"GCD = "<<gcd<<endl;
	return 0;
}