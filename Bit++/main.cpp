#include <iostream>

using namespace std;

int main()
{
    int n,x=0,i;
    cin>>n;
    string s;
    for (i=0;i<n;i++)
    {
        cin>>s;
        if (s=="++X" || s=="X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;



}
