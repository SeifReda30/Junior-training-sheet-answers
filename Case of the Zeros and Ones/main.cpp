#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,c=0,e=0;
    cin>>n;
    string s;
    cin>>s;
    for (i=0;i<n;i++)
    {
        if (s[i]=='1')
        {
            c++;
        }
        else
        {
            e++;
        }
    }
    if (c==e)
    {
        cout<<0;
    }
    if (c>e)
    {
        cout<<c-e;
    }
    if (c<e)
    {
        cout<<e-c;
    }

}

