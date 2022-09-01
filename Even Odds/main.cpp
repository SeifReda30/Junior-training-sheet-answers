#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,odd,even;
    cin>>n>>k;
    odd=(n+1)/2;
    even=n/2;
    if (n%2==0)
    {
        if (k<=even)
        {
            cout<<k*2-1;
        }
        else
        {
            cout<<(k-even)*2; //important
        }
    }
    else
    {
        if (k<=odd)
    {
        cout<<k*2-1;
    }
    else
    {
        cout<<(k-odd)*2; //important
    }

    }

}
