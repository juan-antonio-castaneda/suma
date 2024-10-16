#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, x, y;
    cin>>n>>x>>y;
    for(int i=0; i<n; i++)
    {
  if(x<0 && y >0)
     {
         cout<<"II";
     }
     cout<<endl;
  if(x>0 && y <0)
     {
         cout<<"IV";
     }
    }
     return 0;
}

