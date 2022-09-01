#include <iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string first;
    string second;
    cin>>first;
    cin>>second;
    std::transform(first.begin(), first.end(), first.begin(), ::tolower);
    std::transform(second.begin(), second.end(), second.begin(), ::tolower);
        if(first==second)
        {
            cout<<0;
        }
        else if (first>second)
        {
            cout<<1;
        }
        else
        {
            cout<<-1;
        }

}
