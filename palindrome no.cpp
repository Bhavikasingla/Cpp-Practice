#include<iostream>
using namespace std;
int main(){
    int n, temp;
    cin>>n;
    int reverse=0;
    temp=n;
    while (n>0)
    {
        int lastdigit =n%10;
        reverse = reverse*10+lastdigit;
        n=n/10;
        
    }
    //cout<<reverse<<endl;
    if (temp==reverse)
    {
        cout<<reverse<<" is a palindrom number"<<endl;
    }
    else
    {
    	cout<<reverse<<" is not a palindrom number"<<endl;
	}
 return 0;   
}