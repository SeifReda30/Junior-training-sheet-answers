#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int i;
    char c;
    string s;
    cin>>s;
    for (i=0;i<s.length();i++)
    {
        if ((s[i]=='A')||(s[i]=='a')||(s[i]=='O')||(s[i]=='o')||(s[i]=='Y')||(s[i]=='y')||(s[i]=='E')||(s[i]=='e')||(s[i]=='U')||(s[i]=='u')||(s[i]=='I')||(s[i]=='i'))
        {
            continue;

        }
        else
        {
            c=tolower(s[i]);
            cout<<"."<<c;
        }

    }
}
