#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int N, a;
  cout<<"Enter no of chocolate: "<<endl;
  cin>>N;
  a=N*(N+1)/2;
  if(a%2==0)
  {
    cout<<0;
  }
  else
  {
    cout<<1;
  }
  return 0;
}