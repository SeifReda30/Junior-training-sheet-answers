#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[4],i,j,c=0;
    long long brr[4];
    bool found=false;
    for (i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<4;i++)
    {
        found=false;
        for (j=0;j<c;j++)
        {
            if (arr[i]==brr[j])
            {
                found=true;
                break;
            }
        }
        if (!found)
        {
            brr[c]=arr[i];
            c++;
        }
    }
    cout<<4-c;



}
