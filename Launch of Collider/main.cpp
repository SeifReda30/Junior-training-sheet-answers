#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,result,i,mini=10000000000;
    string s;
    cin>>n;
    cin>>s;
    int arr[n];
    int brr[]
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n-1;i++)
    {
        if (s[i]=='R' && s[i+1]=='L')
        {
            result=(arr[i+1]-arr[i])/2;
            if (result<mini)
            {
                mini=result; //getting the least result value among the array so comparing between first result value and the next one
            }
        }
        else
        {
            continue;
        }
    }
    if (mini==10000000000)
    {
        cout<<-1;
    }
    else
    {
        cout<<mini;
    }

}
