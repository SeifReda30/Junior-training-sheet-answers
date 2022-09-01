#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,l=0,u=0;
   string s;
   cin>>s;
   for (i=0;i<s.length();i++)
   {
       if (islower(s[i]))
       {
           l++;
       }
       if (isupper(s[i]))
       {
           u++;
       }
   }
   if (l>=u)
   {
       std::transform(s.begin() , s.end() , s.begin() , ::tolower );
       cout<<s;
   }
   else
   {
        std::transform(s.begin() , s.end() , s.begin() , ::toupper );
       cout<<s;
   }

}
