#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i,arr[4],c=0;
    string s;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if (s[i]=='1') //s[i] is char cannot be compared by integer so we compare it by the ascii of the integer like '1'
        {
            c=c+arr[0];
        }
        if (s[i]=='2')
        {
            c=c+arr[1];
        }
        if (s[i]=='3')
        {
            c=c+arr[2];
        }
        if (s[i]=='4')
        {
            c=c+arr[3];
        }
    }
    cout<<c;
}
