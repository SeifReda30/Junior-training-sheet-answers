#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,i,c=0;
    cin>>n;
    unsigned long long int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+n);
    if (n>2)
    {
        for (i=0;i<n;i++)
        {
            if (arr[i]>arr[0] && arr[i]<arr[n-1]) // because if the number equal the first number (smallest number) or the number is equal the last number (greatest number) so its failed
            {
                c++;
            }
        }
        cout<<c;
    }
    else
    {
        cout<<0;
    }
}
