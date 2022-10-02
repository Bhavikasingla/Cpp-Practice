#include<iostream> 
using namespace std;

int main(){
int n;
cout<<"enter the index of arr: ";
cin>>n;
int *array1=new int(n);
for(int i=1; i<=n; i++ )
{
	cin>>array1[i];
}
cout<<"array entered is: ";
for(int i=1; i<=n; i++ )
{
	cout<<array1[i]<<" ";
}
cout<<endl;
return 0;
}
