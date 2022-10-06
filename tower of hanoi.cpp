#include<iostream>
using namespace std;
void TOH(int n, char s, char a, char d)
{
	if(n==1)
	{
		cout<<"Disk shifted from "<<s<<" to "<<d<<endl;
	}
	else
	{
		TOH(n-1,s,d,a);
		cout<<"Disk shifted from "<<s<<" to "<<d<<endl;
		TOH(n-1,a,s,d);
	}
}
int main()
{
	int n;
	cout<<"enter the no of disk"<<endl;
	cin>>n;
//	char s,d,a;
    TOH(n,'S','A','D');
	
	return 0;
}
