#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,i,p=0,m=0,e=0,result;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]==1)
            p++;
        if (arr[i]==2)
            m++;
        if (arr[i]==3)
            e++;
    }

    if (p>0 && m>0 && e>0)
    {
    if (p==m && p==e && m==e)
    {
        result=p;
    }
    if (p>=m && e>=m)
    {
        result=m;
    }
    if (m>=p && e>=p)
    {
        result=p;
    }
    if (p>=e && m>=e)
    {
        result=m;
    }
    if (p>=m && p>=e && e<=m)
    {
        result=e;
    }
    if (p>=m && p>=e && m<=e)
    {
        result=m;
    }
    if (m>=p && m>=e && p<=e)
    {
        result=p;
    }
    if (m>=p && m>=e && e<=p)
    {
        result=e;
    }
    if (e>=p && e>=m && p<=m)
    {
        result=p;
    }
    if (e>=p && e>=m && m<=p)
    {
        result=m;
    }
    }
    else
    {
        cout<<0;
        return 0;
    }
    cout<<result;
    cout<<endl;
    int brr[result][3];
    j=0;
    for (i=0;i<result;i++)
    {
        while (j<n)
        {
            if (arr[j]==1)
            {
                brr[i][0]=j+1;
                j++;
                break;
            }
            else
            {
                j++;
                continue;
            }
        }
    }
    j=0;
        for (i=0;i<result;i++)
    {
        while (j<n)
        {
            if (arr[j]==2)
            {
                brr[i][1]=j+1;
                j++;
                break;
            }
            else
            {
                j++;
                continue;
            }
        }
    }
    j=0;
        for (i=0;i<result;i++)
    {
        while (j<n)
        {
            if (arr[j]==3)
            {
                brr[i][2]=j+1;
                j++;
                break;
            }
            else
            {
                j++;
                continue;
            }
        }
    }
    for (i=0;i<result;i++)
    {
        for (j=0;j<3;j++)
        {
        cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }



}
