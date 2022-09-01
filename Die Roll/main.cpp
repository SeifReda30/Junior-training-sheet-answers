#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    int mx=max(y,w);
    mx=6-mx+1;
    if(mx==1)cout<<"1/6";
    if(mx==2)cout<<"1/3";
    if(mx==3)cout<<"1/2";
    if(mx==4)cout<<"2/3";
    if(mx==5)cout<<"5/6";
    if(mx==6)cout<<"1/1";
}
