#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,b,d,i,result=0,c=0,org;
    cin>>n>>b>>d;
    for (i=0;i<n;i++)
    {
        cin>>org;
        if (org>b)
        {
            continue;
        }
        else
        {
            c+=org;
            if (c>d)
            {
                result++;
                c=0;
            }
        }
    }
    cout<<result;
    return 0;

}
