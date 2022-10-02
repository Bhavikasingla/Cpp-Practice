#include<iostream>
using namespace std;


int main(){
	
	string s;
	getline(cin,s);
    for(int i=0; i<=s.length();i++){
        if(i==0){
            s[i]=s[i]-32;
        }
		else if(s[i]==' ' && 97<=s[i+1]){
            s[i+1]=s[i+1]-32;
        }
    }
    cout<<s<<endl;
	return 0;
}