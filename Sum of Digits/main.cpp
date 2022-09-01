#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(string s)
{
    unsigned long long int i,res=0;
    int c=s.length();
    for (i=0;i<c;i++)
    {
        res=res+s[i]-'0';
    }
    int a=1;
    if (res>9)
    {
        while (res>9)
        {
            a++;
            string ss = to_string(res); // function convert integer to string to sum up the digits easily
            res=0;
            for (i=0;i<ss.length();i++)
            {
                res=res+ss[i]-'0';
            }
        }
        return a;
    }
    else
    {
        return a;
    }

}
int main()
{
    string s; // we use string to deal with big numbers and do this for all big numbers
    cin>>s;
    if (s.length()<2)
    {
        cout<<0;
        return 0;
    }
    else
    {
        cout<<sum(s);
    }

}
