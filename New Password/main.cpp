#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,i,j;
    cin>>n>>k;
    string s = "abcdefghijklmnopqrstuvwxyz"; // string length is determined by this initializing or scanning it
    char result[n]; //cannot declaring string because its length is not determined so we use array of character
    j=0;
    for (i=1;i<=n;i++)
    {
            result[i]=s[j];
            cout<<result[i];
            if (i%k==0)
            {
                j=0;
            }
            else
            {
                j++;
            }
    }
    // string length must be determined to use the string as by initializing it or scanning .. otherwise use array of char
}
