#include <iostream>   
using namespace std;
int main() {
	int i, j, n, s;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
        int k=0;
        for(int space=0;space<n-i;space++){
            cout<<"  ";
        }
        while(k!=2*i-1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}