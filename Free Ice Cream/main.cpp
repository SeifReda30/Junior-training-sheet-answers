#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,y,i,c=0,z=0;
    char s;
    cin>>n>>x;
    long long int m=n+1;
    long long int arr[m];
    arr[0]=x;
    for (i=1;i<=n;i++)
    {
        cin>>s>>y;
        if (s=='+')
        {
            arr[i]=y;
        }
        else
        {
            arr[i]=-y;
        }
    }
    for (i=0;i<m;i++)
    {
        if (arr[i]>0)
        {
           z+=arr[i];
        }
        else
        {
            if (abs(arr[i])<=z)
            {
                z+=arr[i];
            }
            else
            {
                c++;
                continue;
            }
        }
    }
    cout<<z<<" "<<c;
}
