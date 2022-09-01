#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alpha="abcdefghijklmnopqrstuvwxyz";
    int n,i,j,c=0;
    int m=alpha.length();
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (alpha[i]==s[j])
            {
                c++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (c>=m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }




}
