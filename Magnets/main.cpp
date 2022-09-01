#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    int n,i,num,a,b,c,count=1;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>num;
        b=num%10;
        num/=10;
        a=num%10;
        if (!s.empty())
        {
            c=s.top();
            if (a==c)
            {
                count++;
            }
            s.pop();
        }
        s.push(b);
    }
    cout<<count;



}
