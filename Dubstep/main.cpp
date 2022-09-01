#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    string result="";
    cin>>s;
    int len=s.length();
    for (i=0;i<len;)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if (result.length()==0)
            {
                i+=3;
            }
            else
            {
                result+=" ";
                i+=3;
            }
        }
        else
        {
            result+=s[i];
            i++;
        }
    }
    cout<<result;


}
