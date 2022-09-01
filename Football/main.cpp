#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c=0;
    cin>>n;
    string s[n];
    for (i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for (i=0;i<n;i++)
    {
        c=0;
        for (j=0;j<n;j++)
        {
            if (s[i]==s[j])
            {
                c++;
            }
            else
            {
                continue;
            }
        }
        if (c>n/2)
        {
            cout<<s[i];
            break;
        }
    }
}
