#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n,i,num,sereja=0,dima=0,first,last;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    for (i=0;i<n;i++)
    {
        last=v.back();
        first=v.front();
        if (i%2==0)
        {
            if (first>=last)
            {
                sereja+=first;
                v.erase(v.begin());
            }
            else
            {
                sereja+=last;
                v.pop_back();
            }

        }
        else
        {
            if (first>=last)
            {
                dima+=first;
                v.erase(v.begin());
            }
            else
            {
                dima+=last;
                v.pop_back();
            }
        }

    }
    cout<<sereja<<" "<<dima;



}
