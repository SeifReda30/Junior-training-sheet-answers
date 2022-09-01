#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool valid=true;
    long long c=0,i,z=0,j,odd=0;
    string s;
    cin>>s;
    long long len=s.length();
    int arr[200]={0};
    string lett="";
    for (i=0;i<len;i++)
    {
        valid=true;
        arr[s[i]]++;
        for (j=0;j<lett.length();j++)
        {
            if (s[i]==lett[j])
            {
                valid=false;
                break;
            }
        }
        if (valid)
        {
            lett+=s[i];
        }
    }
    for (j=0;j<lett.length();j++)
    {
        if (arr[lett[j]]%2!=0)
        {
            c++;
        }
        if (arr[lett[j]]==1)
        {
            z++;
        }
    }
    if (z<=1)
    {
        cout<<"First";
    }
    else
    {
        if (c%2!=0)
        {
            cout<<"First";
        }
        else
        {
            cout<<"Second";
        }
    }



}
