#include<iostream>

using namespace std;


int main()
{
	int x=-1;
	try{
		if(x<0)
		{
			throw x;
			cout<<"Welcome to try block";
		}
	}
	catch(float)
	{
		cout<<"Welcome to float catch block";
	}
	
	catch(int)
	{
		cout<<"Welcome to int catch block";
	}
	
	return 0;
}