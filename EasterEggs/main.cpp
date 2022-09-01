#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char temp;
    bool found=false;
    string s="ROYGBIV";
    string result="";
    cin>>n;
    int rest=n%7;
    int j=0,c=0,i;
    if (n==7)
    {
        cout<<s;
        return 0;
    }
    for (i=7;i<=n;i+=7)
    {
        result+=s;
    }
    if (rest>=4)
    {
        for (i=0;i<rest;i++)
        {
            result+=s[i];
        }
    }
    else
    {
        if (rest==3)
        {
            result+="GBI";
        }
        if (rest==2)
        {
            result+="GB";
        }
        if (rest==1)
        {
            result+="G";
        }
    }
    cout<<result;




}
