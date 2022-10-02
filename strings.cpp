#include<iostream> 
using namespace std;

int main(){
string name="Hello";
name.push_back('A');
cout<<name<<endl;
name.pop_back();
cout<<name<<endl;
name.resize(3);
cout<<name;
return 0;
}