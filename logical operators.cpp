#include<iostream>  //logical operators
using namespace std;
int main(){
int a, b, c, d, e; 
cout<<"enter a and b: "<<endl;
cin>>a>>b;
c=a&&b;
e=(a||b);
d=!a;
cout<<"result of and is: "<<c<<endl;
cout<<"result of not is: "<<d<<endl;
cout<<"result of or is: "<<e;
return 0;
}