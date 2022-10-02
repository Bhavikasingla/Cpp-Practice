#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t>0)
    {
      int n,m;
      cin>>n>>m;
      int a[n][m];
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<m; j++)
        {
          cin>>a[i][j];
        }
      }
      int strw=0;
      int stcl=0;
      int endr=n-1;
      int endc=m-1;
      while(strw<=endr&&stcl<=endc)
      {
        for(int i=strw; i<=endr;i++)
        {
          cout<<a[i][stcl]<<" ";
        }
       // cout<<endl;
        stcl++;
        for(int i=stcl; i<=endc; i++)
        {
          cout<<a[endr][i]<<" ";
        }
       // cout<<endl;
        endr--;
        if(stcl<=endc)
        {
          for(int i=endr; i>=strw; i--)
          {
            cout<<a[i][endc]<<" ";
          }
          endc--;
        }
       // cout<<endl;
        // endr--;
        if(strw<=endr)
        {
          for(int i=endc; i>=stcl; i--)
          {
            cout<<a[strw][i]<<" ";
          }
         // cout<<endl;
          strw++;
        }
        //
      }
      cout<<endl;
      t--;
    }
    return 0;
  }