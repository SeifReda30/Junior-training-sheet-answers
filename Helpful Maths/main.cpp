#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    string s;
    char arr[100];
    cin>>s;
    if (s.length()%2==0)
    {
        n=s.length()/2;
    }
    else
    {
        n=(s.length()/2)+1;
    }
    j=0;
    for (i=0;i<n;i++)
    {
        while (j<s.length())
        {
        if (s[j]=='+')
        {
            j++;
            continue;
        }
        else
        {
            arr[i]=s[j];
            break;
        }
        }
        j++;
    }
    sort(arr,arr+n);
    for (i=0;i<n-1;i++)
    {
        cout<<arr[i]<<"+";
    }
        cout<<arr[n-1];


}
