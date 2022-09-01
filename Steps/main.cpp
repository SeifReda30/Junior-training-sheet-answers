#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,x1,y1,k,i,j,c=0,x,y,max_x,max_y;
    cin>>n>>m;
    cin>>x1>>y1;
    cin>>k;
    x=x1;
    y=y1;
    max_x=x1+m;
    max_y=y1+n;
    long long int arr[k][2];
    for (i=0;i<k;i++)
    {
        for (j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (i=0;i<k;i++)
    {
        while ((x1+arr[i][0]<max_x) &&(x1+arr[i][0]>x) && (y1+arr[i][1]<max_y) && (y1+arr[i][1]>y))
        {
            x1=x1+arr[i][0];
            y1=y1+arr[i][1];
            c++;
        }
    }
    cout<<c;

}

