#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x1,y1,x2,y2,n,i,j,z,u,k,l,ans=0;
    float dis;
    bool valid = true;
    cin>>x1>>y1>>x2>>y2;
    cin>>n;
    int b=min(y1,y2);
    int c=max(y1,y2);
    int m=min(x1,x2);
    int e=max(x1,x2);
    int arr[n][2];
    int r[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>r[i];
    }
    for (i=m;i<=e;i++)
    {
        if (i==m || i==e)
        {
            for (j=b;j<=c;j++)
            {
                for (z=0;z<n;z++)
                {
                    k=arr[z][0]-i;
                    l=arr[z][1]-j;
                    u=(k*k)+(l*l);
                    dis=sqrt(u);
                    cout<<dis<<endl;
                    if (dis<=r[z])
                    {
                        valid=false;
                    }
                }
                if (valid)
                {
                    ans++;
                }
                valid = true;
            }
        }
        else
        {
                valid = true;
                for (z=0;z<n;z++)
                {
                    k=arr[z][0]-i;
                    l=arr[z][1]-b;
                    u=(k*k)+(l*l);
                    dis=sqrt(u);
                    cout<<dis<<endl;
                    if (dis<=r[z])
                    {
                        valid=false;
                    }
                }
                if (valid)
                {
                    ans++;
                }
                valid = true;
                for (z=0;z<n;z++)
                {
                    k=arr[z][0]-i;
                    l=arr[z][1]-c;
                    u=(k*k)+(l*l);
                    dis=sqrt(u);
                    cout<<dis<<endl;
                    if (dis<=r[z])
                    {
                        valid=false;
                    }
                }
                if (valid)
                {
                    ans++;
                }
                valid = true;
        }
    }
    cout<<ans;


}
