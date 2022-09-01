#include<bits/stdc++.h>

using namespace std;
int main()
{
    char a[4][4];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            cin>>a[i][j];
    int n=4;
    int cont=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            int has=0,dot=0;
            if(a[i][j]=='#')
                has++;
            else
                dot++;
            if(a[i+1][j]=='#')
                has++;
            else
                dot++;
            if(a[i][j+1]=='#')
                has++;
            else
                dot++;
            if(a[i+1][j+1]=='#')
                has++;
            else
                dot++;
            if(has==3||dot==3||has==4||dot==4)
                {
                    cont++;
                    cout<<"YES";
                    return 0;
                }
        }
    }
    if(cont==0)
        cout<<"NO";
}
