#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,result1,result2;
    cin>>n;
    long long int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if (n==2)
    {
        result1=abs(arr[1]-arr[0]);
        for (i=0;i<n;i++)
        {
            cout<<result1<<" "<<result1<<endl;
        }
    }
    else
    {
    for (i=0;i<n;i++)
    {
        if (i==0)
        {
                result1=abs(arr[i+1]-arr[i]);
            if ((abs(arr[i]-arr[0]))>=(abs(arr[i]-arr[n-1])))
            {
                result2=abs(arr[i]-arr[0]);
            }
            else
            {
                result2=abs(arr[i]-arr[n-1]);
            }
            cout<<result1<<" "<<result2<<endl;
        }
        else
        {
            if ((abs(arr[i+1]-arr[i]))<=(abs(arr[i-1]-arr[i])))
            {
                result1=abs(arr[i+1]-arr[i]);
            }
            else
            {
                result1=abs(arr[i-1]-arr[i]);
            }
            if ((abs(arr[i]-arr[0]))>=(abs(arr[i]-arr[n-1])))
            {
                result2=abs(arr[i]-arr[0]);
            }
            else
            {
                result2=abs(arr[i]-arr[n-1]);
            }
            cout<<result1<<" "<<result2<<endl;

        }
    }
    }
}
