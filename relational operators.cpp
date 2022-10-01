#include<iostream>    //relational operators
using namespace std;
int main(){
int a, b, c, d, e, f, g, h; 
cout<<"enter a and b: "<<endl;
cin>>a>>b;
c=a<b;
d=a>b;
e=(a<=b);
f=(a>=b);
g=(a!=b);
h=(a==b);
cout<<"result for less than operator: "<<c<<endl;
cout<<"result for greater than operator: "<<d<<endl;
cout<<"result for less than equal to operator: "<<e<<endl;
cout<<"result for greater than equal to operator: "<<f<<endl;
cout<<"result for not equal to operator: "<<g<<endl;
cout<<"result for equal to operator: "<<h<<endl;
return 0;  // 1 here is true and 0 here is false in the output
}