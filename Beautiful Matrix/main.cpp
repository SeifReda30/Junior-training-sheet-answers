#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int i,j,row,column,moves;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                row=i;
                column=j;
            }
        }
    }
    moves=abs(row-2)+abs(column-2);
    cout<<moves;




}
