#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, d, r, i1, i2, r1, r2;
	cout<<"Enter the cofficients of a quadratic eq: "<<endl;
	cin>>a>>b>>c;
	d=((b*b)-(4.0*a*c));
	r=-b/(2.0)*a;
	i1=sqrt(b*b-4.0*a*c)/(2.0)*a;
	i2=sqrt(-(b*b-4.0*a*c))/(2.0)*a;
	if(d>0)
	{
		r1=r+i1;
		r2=r-i1;
		cout<<"for d>0 : "<<r1 <<r2<<endl;
	}
	else if(d<0.0)
	{
		cout<<"for d<0 : "<<endl;
		cout<<"r1 = "<<r<<"+ i*"<<i2<<endl;
		cout<<"r2 = "<<r<<"- i*"<<i2<<endl;
	}
	else
	{
		r1=r;
		r2=r;
		cout<<"for d=0 : "<<r1 <<r2<<endl;	
	}
	return 0;
}