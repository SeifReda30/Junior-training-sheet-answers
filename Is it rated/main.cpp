#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n][2];
    for (i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for (i=0;i<n;i++)
    {
        if (arr[i][0]!=arr[i][1])
        {
            cout<<"rated";
            return 0;
        }
    }
    for (i=0;i<n-1;i++) // separated array to compare with next value (n-1)
    {
        if (arr[i][0]>=arr[i+1][0])
        {
            continue;
        }
        else
        {
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
    return 0;
}
