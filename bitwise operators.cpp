#include<iostream>    //bitwise operators
using namespace std;
int main(){
int a{0b1010}, b{0b1111}, c, d, e, f, g, h, i, j, k; 
//cout<<"enter a and b: "<<endl;
//cin>>a>>b;
c=a&b;
d=a|b;
e=(a^b);
f=(~a);
g=(~b);
h=a<<1; //left shift operator multiplies the input by power of 2 acc to given arg
i=b<<2; //eg for a we put 1 so it's ans will be 2^1=2 times, but for b 2^2=4 times
j=a>>1; //Right shift operator divides the input by power of 2 acc to given arg
k=b>>2; //eg for a we put 1 so it's ans will divided be 2^1=2 times, but for b divided by 2^2=4 times
cout<<"result for and operator: "<<c<<endl;
cout<<"result for or operator: "<<d<<endl;
cout<<"result for x-or to operator: "<<e<<endl;
cout<<"result for negate operator for a: "<<f<<endl;
cout<<"result for negate operator for b: "<<g<<endl;
cout<<"result for left shift operator for a: "<<h<<endl;
cout<<"result for left shift operator for b: "<<i<<endl;
cout<<"result for right shift operator for a: "<<j<<endl;
cout<<"result for right shift operator for b: "<<k<<endl; 
//also while division we will only get whole no int ans and not a float value
return 0;  
}