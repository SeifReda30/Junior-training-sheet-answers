#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x;
    bool valid = false;
    cin>>n;
    int arr[n];
    int brr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    i=0;
    for (j=n;j>=1;j--) // arr[i] = 3 1 2 | j = 3 2 1
    {
        while (i<n)
        {
            if (arr[i]==j)
            {
                cout<<j<<" ";
                i++;
                break;
            }
            else
            {
                for (x=0;x<n;x++)
                {
                if (brr[x]==j)
                {
                    cout<<j<<" ";
                    c++;
                    i++;
                    valid=true;
                    break;
                }
                }
                if (valid)
                {
                    break;
                }
                else
                {
                cout<<endl;
                brr[c]=j;
                i++;
                continue;
                }
            }
        }
    }
}
