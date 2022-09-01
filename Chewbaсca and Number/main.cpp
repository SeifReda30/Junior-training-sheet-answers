#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,m;
    string x;
    cin>>x;
    m=x.length();
    for (i=0;i<m;i++)
    {
            if (x[i]>='5') //every number equal or above 5 and subtracted from 9 will give a small number
            {
                x[i]='9'-(x[i]-'0');
            }
            else
            {
                continue;
            }
    }
    if (x[0]=='0')
    {
        x[0]=x[0]+9;
        for (i=0;i<m;i++)
        {
            cout<<x[i];
        }
    }
    else
    {
    for (i=0;i<m;i++)
    {
        cout<<x[i];
    }
    }
}

