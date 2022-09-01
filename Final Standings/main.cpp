#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct data
{
    int id,m;
        data(){}

    bool operator < (data X)const{
        return m>X.m;
    }
};
int main()
{
    int n,i,x,y,j;
    cin>>n;
    struct data info[n];
    for (i=0;i<n;i++)
    {
        cin>>info[i].id>>info[i].m;
    }
    stable_sort (info,info+n);
    for (i=0;i<n;i++)
    {
        cout<<info[i].id<<" "<<info[i].m<<endl;
    }


}
