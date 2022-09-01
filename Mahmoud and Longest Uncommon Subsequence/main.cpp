#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    string s,ss;
    cin>>s>>ss;
    n=s.length();
    m=ss.length();
    if (s==ss) // if two strings are equal typically then they have common sequence
    {
        cout<<-1;
        return 0;
    }
    else
    {
        if (n>m)
        {
            cout<<n;
            return 0;
        }
        if (m>n)
        {
            cout<<m;
            return 0;
        }
        else
        {
            cout<<n;
            return 0;
        }
    }



}
