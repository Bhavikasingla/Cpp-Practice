#include<iostream>    
using namespace std;
int main()
{
	int *y, a[5]={1, 2, 3, 4, 5};
	y = a;
	cout<<"elements of arr and their address: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<*y<<endl;
		cout<<&y<<endl;
		y++;
	}
	return 0;
} 