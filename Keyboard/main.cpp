#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string arr;
    cin>>arr;
    for (i=0;i<arr.length();i++)
    {
        if(c=='R')
        {
            for (j=0;j<s.length();j++)
            {
                if (arr[i]==s[j])
                {
                    arr[i]=s[j-1];
                    break;
                }
            }
        }
        else
        {
            for (j=0;j<s.length();j++)
            {
                if (arr[i]==s[j])
                {
                    arr[i]=s[j+1];
                    break;
                }
            }
        }

    }
    cout<<arr;
}
