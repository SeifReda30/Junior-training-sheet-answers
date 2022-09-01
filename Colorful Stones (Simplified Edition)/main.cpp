#include <iostream>

using namespace std;

int main()
{
    string s,t;
    int i,j=0;
    cin>>s;
    cin>>t;
    for(i=0;i<t.length();i++)
    {
        if (s[j]==t[i])
        {
            j++;
        }
    }
    cout<<j+1;

}
