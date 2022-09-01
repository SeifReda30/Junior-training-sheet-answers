#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,c=0;
    cin>>s;
    sort(s.begin(),s.end());
    for (i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }


}
