#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool disting=false;
    long n,i,j,temp,valid_count=0;
    cin>>n;
    int arr[n];
    i=0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    int x[n];
    x[0]=arr[0];
    int c=0;
    i=0,j=0;
    while (i<n)
    {
        j=0;
        while (j<c)
        {
            if (arr[i]==x[j])
            {
                disting=true;
                break;
            }
            else
            {
             disting=false;
            }
            j++;
        }
        if (!disting)
        {
            x[c]=arr[i];
            c++;
        }
        i++;
    }
    int pos[n],y=0,z,inc;
    int valid_seq[n];
    sort(x, x + c);
    i=0,j=0,z=0;
    while(i<c)
    {
        j=0;
        z=0;
        valid_seq[i]=1;
        y=0;
        while(j<n)
        {
            if (x[i]==arr[j])
            {
                pos[y]=j;
                y++;
            }
            j++;
        }
        inc=pos[1]-pos[0];
        while(z<y-1)
        {
            if (pos[z+1]-pos[z]==inc)
            {
                z++;
                valid_seq[i]=inc;
                continue;
            }
            else
            {
                valid_seq[i]=0;
                break;
            }
            z++;
        }
        if (valid_seq[i])
        {
            valid_count++;
        }
        i++;
    }
    if (valid_count==0)
    {
        cout<<0;
        return 0;
    }
    cout<<valid_count<<endl;
    i=0,j=0;
    while(i<c)
    {
        j=0;
        if (!valid_seq[i])
        {
            i++;
            continue;
        }
        else
        {
        y=0;
        while(j<n)
        {
            if (x[i]==arr[j])
            {
                pos[y]=j;
                y++;
            }
            j++;
        }
        if (y==1)
        {
            cout<<x[i]<<" "<<0<<endl;
        }
        else
        {
            inc=pos[1]-pos[0];
            cout<<x[i]<<" "<<inc<<endl;
        }
        }
        i++;
    }




}
