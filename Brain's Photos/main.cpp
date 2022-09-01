#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,m,c=0;
    cin>>n>>m;
    char arr[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y')
            {
                c++;
            }
            else
            {
                continue;
            }
        }
    }
    if (c!=0)
    {
        cout<<"#Color";
    }
    else
    {
        cout<<"#Black&White";
    }



}
