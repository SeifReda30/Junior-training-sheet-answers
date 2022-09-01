#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,c=0;
    cin>>x;
    while(x>0)
    {
        if (x%2==0)
        {
            x=x/2;
            continue;
        }
        else
        {
            c++;
            x=x/2;
        }
    }
    cout<<c;

    //we calculate how many bacteria he added not how many bacteria should he add


}
