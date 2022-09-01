#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i;
    cin>>n;
    string s;
    string arr[n]; //array of strings to store converted strings
    for (i=0;i<n;i++)
    {
        cin>>s;
        long long int c=s.length();
        if (c<=10)
        {
            arr[i]=s;
        }
        else
        {
            arr[i]=s[0]+to_string((c-2))+s[c-1]; //concatenate strings so convert number to string
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
