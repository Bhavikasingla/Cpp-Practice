#include<iostream> 
#include<string.h>
using namespace std;

int main(){
string name="Hello";
string name1="Welcome to G12";
name.swap(name1);
name.swap(name);
cout<<name<<endl;
cout<<name1;
}