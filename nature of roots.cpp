#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	float d,r1,r2,real_part;
	cin>>a>>b>>c;
	 d=(b*b)-(4*a*c);
	if(d==0){
		cout<<"Real and Equal\n";
		r1=r2= (-b)/(2*a);
		cout<<r1<<" "<<r2<<endl;
	}
	else if(d>0){
		cout<<"Real and Distinct\n";
		r1= ((-b)-sqrt(d))/(2*a);
		r2= ((-b)+sqrt(d))/(2*a);
		cout<<r1<<" "<<r2<<endl;
	}
	else{
		cout<<"imaginary roots\n";
		real_part=(-b)/(2*a);
		cout<<real_part;
	}
}