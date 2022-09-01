#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a==b && b==c && c==d)
    {
        cout<<0;
        return 0;
    }
    else
    {
        if (c%a==0)
        {
            b=b*(c/a);
            if (d>b)
            {
                cout<<d-b<<"/"<<d;
            }
            else
            {
                cout<<b-d<<"/"<<b;
            }
        }
        if (a%c==0)
        {
            d=d*(a/c);
            if (d>b)
            {
                cout<<d-b<<"/"<<d;
            }
            else
            {
                cout<<b-d<<"/"<<b;
            }
        }
        if (b%d==0)
        {
            c=c*(b/d);
            if (c>a)
            {
                cout<<c-a<<"/"<<c;
            }
            else
            {
                cout<<a-c<<"/"<<a;
            }
        }
        if (d%b==0)
        {
            a=a*(d/b);
            if (c>a)
            {
                cout<<c-a<<"/"<<c;
            }
            else
            {
                cout<<a-c<<"/"<<a;
            }
        }
    }


}
