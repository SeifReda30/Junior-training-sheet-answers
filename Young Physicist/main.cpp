#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,a=0,b=0,c=0;
    cin>>n;
    long long int arr[n][3];
    for (i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
            a+=arr[i][0];
    }
    for (i=0;i<n;i++)
    {
            b+=arr[i][1];
    }
    for (i=0;i<n;i++)
    {
            c+=arr[i][2];
    }
    if (a==0 && c==0 && b==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
