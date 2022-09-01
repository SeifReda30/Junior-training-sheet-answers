#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,i;
    double max_x,max_y,min_z,a,b;
    cin>>x;
    double arr_x[x];
    for (i=0;i<x;i++)
    {
        cin>>arr_x[i];
    }
    cin>>y;
    double arr_y[y];
    for (i=0;i<y;i++)
    {
        cin>>arr_y[i];
    }
    cin>>z;
    double arr_z[z];
    for (i=0;i<z;i++)
    {
        cin>>arr_z[i];
    }
    cin>>a>>b;
    max_x=arr_x[0];
    max_y=arr_y[0];
    min_z=arr_z[0];
    for (i=0;i<x;i++)
    {
        if (arr_x[i]>=max_x)
        {
            max_x=arr_x[i];
        }
    }
    for (i=0;i<y;i++)
    {
        if (arr_y[i]>=max_y)
        {
            max_y=arr_y[i];
        }
    }
    for (i=0;i<z;i++)
    {
        if (arr_z[i]<min_z)
        {
            min_z=arr_z[i];
        }
    }
    double r2=sqrt((b*max_y*pow(max_x,2))/((a*min_z)+(b*max_y)));
    printf("%.15f",r2);

}
