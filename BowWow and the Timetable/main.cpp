#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool is_integer(long double k)
{
  return std::floor(k) == k;
}
int main()
{
    long long i,j=0;
    string s;
    cin>>s;
    if (s.length()==1 && s[0]=='0')
    {
        cout<<0;
        return 0;
    }
    int c=0;
    for (i=(s.length()-1);i>=0;i--)
    {
        if (s[i]=='1')
        {
            c++;
        }
    }
    if (c==1)
    {
        cout<<floor(s.length()/2.0);
    }
    else
    {
        cout<<ceil(s.length()/2.0);
    }


}
