#include<bits/stdc++.h>
using namespace std;
int main()
#define ll long long int
{
    ll l,r;
    cin>>l>>r;
    for(ll i=0;i<=r;i++)
    {
     if (l % 2 != 0)
     {
      l++;
      continue;
     }
   else if (l + 2 > r)
   {
    cout<<-1<<endl;
    break;
   }
  else
  {
    cout<<l<< " " <<l + 1<< " " <<l + 2;
    break;
  }
    }
}
