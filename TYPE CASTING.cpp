#include<iostream>       
using namespace std;
int main()
{
	char alpha;
	cout<<"enter a letter"<<endl;
	cin>>alpha;
	cout<<"The ASCII value of entered letter is: "<<endl<<int(alpha); // here we can also write -> (int)alpha
	return 0;
}