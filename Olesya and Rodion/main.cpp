#include <iostream>
#include <bits/stdc++.h>
#define TTMATH_DONT_USE_WCHAR
#include <ttmath.h> //external library for very big integers , linked in compiler , linker settinges
using namespace std;

int main()
{
    int n,t;
    ttmath::UInt<150> i=1,j; // <150> max number of digits
    cin>>n>>t;
    if (n==1)
    {
        i=1;
        for (j=i;j<10;j++)
        {
        if (j%t==0)
        {
            cout<<j;
            return 0;
        }
        else
        {
            continue;
        }
        }
        cout<<-1;
    }
    else
    {
    for (j=1;j<n;j++)
    {
        i=i*10;
    }
    ttmath::UInt<150>  x=(i*9)-1;
    for (j=i;j<=x;j++)
    {
        if (j%t==0)
        {
            cout<<j;
            return 0;
        }
        else
        {
            continue;
        }
    }
        cout<<-1;
    }

}
/*
another solution which is accepted

#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, t;
int main()
{
    input;
    cin >> n >> t;
    if (t < 10)for (int i = 0; i < n; ++i) cout << t;
    else
    {
        if (n == 1) cout << -1;
        else
        {
            cout << 10;
            for (int i = 0; i < n - 2; ++i) cout << 0;
        }
    }
}
*/

