#include <iostream>  //pyramid inverted * pattern
using namespace std;
int main() {
	int i, j, n, s, k=0;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}