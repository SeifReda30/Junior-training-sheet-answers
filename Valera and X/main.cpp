#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool valid=false;
    long long n,i,j,z,c=0;
    cin>>n;
    string diff="";
    char dig;
    char ch;
    int count=n-1;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            valid=false;
            cin>>ch;
            if (i==0 && j==0)
            {
                dig=ch;
            }
            if (i==j)
            {
                if (ch!=dig)
                {
                    cout<<"NO";
                    return 0;
                }
            }
            if (j==count)
            {
                if (ch!=dig)
                {
                    cout<<"NO";
                    return 0;
                }
            }
            if (i!=j && j!=count)
            {
                for (z=0;z<c;z++)
                {
                    if (ch==diff[z])
                    {
                        valid=true;
                        break;
                    }
                }
                if (!valid)
                {
                    diff+=ch;
                    c++;
                }
            }
        }
        count--;
    }
    if (diff.length()==1)
    {
        if (diff[0]==dig)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    else
    {
        cout<<"NO";
    }



}
