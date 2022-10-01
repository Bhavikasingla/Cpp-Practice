#include <bits/stdc++.h>    //v with letters
using namespace std;

int main()
{
    int i, j, n;
    cout<<"Enter a no: "<<endl;
	cin>>n;
    for (i = n - 1; i >= 0; i--) 
	{
        for (j = n - 1; j > i; j--) {
            cout << " ";
        }
        cout << char(i + 65);
        
        for (j = 1; j < (i * 2); j++)
            cout << " ";
 
        if (i >= 1)
            cout << char(i + 65);
        cout << "\n";
    }
   // pattern(n);
    return 0;
}