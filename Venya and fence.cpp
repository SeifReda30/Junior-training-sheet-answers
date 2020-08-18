#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,h,i,a,ans=0;
    cin>>n>>h;
    if (1<=n&&h<=1000)
    {
        for (i=0;i<n;i++)
            {
                cin>>a;
                if (a>h)
                {
                    ans++;
                }
                ans++;
            }
    }
    cout<<ans;
}
