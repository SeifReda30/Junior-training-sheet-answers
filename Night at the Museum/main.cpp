
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int  rotation=0,flag,difference,i;
    cin>>s;
    flag=97;
    for(i=0;i<s.length();i++){
        difference=abs(flag-s[i]);
        if(difference>13)
        {
            difference=26-difference;
        }
        rotation+=difference;
        flag=s[i];
    }
    cout<<rotation;
}
