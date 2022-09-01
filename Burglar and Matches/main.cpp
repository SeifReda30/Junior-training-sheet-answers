#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,m,i,j,sum=0,max=0,rem;
    cin>>n>>m;
    unsigned long long int arr[m][2];
    for (i=0;i<m;i++)
    {
        for (j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    int largest;
    for (i=0;i<m;i++)
    {
        for (j=i;j<m;j++)
        {
            if (arr[j][1]>arr[i][1])
            {
               largest=arr[j][1];
               arr[j][1]=arr[i][1];
               arr[i][1]=largest;

               largest=arr[j][0];
               arr[j][0]=arr[i][0];
               arr[i][0]=largest;
            }
        }
    }
    for (i=0;i<m;i++)
    {
        if (arr[i][0]+sum<=n)
        {
            sum+=arr[i][0];
            max+=(arr[i][0]*arr[i][1]);
        }
        else
        {
            max+=((n-sum)*arr[i][1]);
            break;
        }

    }
    cout<<max;
}


