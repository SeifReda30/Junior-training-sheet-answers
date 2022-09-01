#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,left,right;
    cin>>n;
    char str1[n];
    char str2[n];
    for (i=0;i<n;i++)
    {
        cin>>str1[i];
    }
    int med;
    if (n%2==0)
    {
        med=(n/2)-1;
        left=med-1;
        right=med+1;
        str2[med]=str1[0];
        for (i=1;i<n;i++)
        {
            if (i%2==0 && left>=0)
            {
                str2[left--]=str1[i];
            }
            else
            {
                str2[right++]=str1[i];
            }
        }
    }
    else
    {
        med=(n/2);
        left=med-1;
        right=med+1;
        str2[med]=str1[0];
        for (i=1;i<n;i++)
        {
            if (i%2!=0 && left>=0)
            {
                str2[left--]=str1[i];
            }
            else
            {
                str2[right++]=str1[i];
            }
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<str2[i];
    }

}
