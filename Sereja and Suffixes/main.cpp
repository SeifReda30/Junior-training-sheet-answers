#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,c=0,x;
    cin>>n>>m;
    vector <int> vn;
    vector <int> vm;
    vector <int> freq_v(1000000,0);
    vector <int> result;
    for (i=0;i<n;i++)
    {
        cin>>x;
        vn.push_back(x);
        freq_v[x]++;
    }
    for (i=0;i<m;i++)
    {
        cin>>x;
        c=0;

        for (j=x-1;j<n;j++)
        {
            if (std::count(vn.begin(),vn.end(), vn[j]))
            {
                continue;
            }
            else
            {
                c++;
            }
        }
        result.push_back(c);
    }
    for (auto x:result)
    {
        cout<<x<<endl;
    }

}
