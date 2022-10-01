#include<iostream>
using namespace std;
void fact(int *);
void fact(int *y)
{
	int f=1, i, z=*y;
	while(i<z)
	{
		f=f*i;
		i++;
	}
	cout<<f<<endl;
}
int main()
{
	int x, *y;
	x=*y;
	fact(&x);
	return 0;
}