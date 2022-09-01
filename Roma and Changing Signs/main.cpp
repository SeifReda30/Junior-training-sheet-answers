#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,k,i,ans=0;
    cin>>n>>k;
    int arr[n];
    if (k<=n)
    {
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]<0 && k>0)
            {
                arr[i]*=-1;
                k--;
            }
            else if (arr[i]>=0 && k>0)
            {
                if (k%2!=0)
                {
                    if (arr[i-1]<arr[i] && n>1)
                    {
                        arr[i-1]*=-1;
                    }
                    else
                    {
                        arr[i]*=-1;
                    }
                    k=0;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]<0 && k>0)
            {
                arr[i]*=-1;
                k--;
            }
            else if (arr[i]>=0 && k>0)
            {
                if (k%2!=0)
                {
                    if (arr[i-1]<arr[i] && n>1)
                    {
                        arr[i-1]*=-1;
                    }
                    else
                    {
                        arr[i]*=-1;
                    }
                    k=0;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
        if (k>0)
        {
            if (k%2!=0)
            {
                arr[0]*=-1;
                k=0;
            }
        }
    }
    ans = accumulate(arr, arr+n, ans);
    cout<<ans;

}
